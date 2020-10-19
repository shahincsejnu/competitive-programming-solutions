using System;
using System.Collections;
using System.Collections.Generic;

namespace first
{
    class Program
    {
        static void Main(string[] args)
        {
            int t;

            t = int.Parse(Console.ReadLine());

            for (int i = 1; i <= t; i++){
                string s;

                s = Console.ReadLine();

                var st = new Stack<char>();

                int l = s.Length;

                for(int j = 0; j < l; j++)
                {
                    if (st.Count == 0) st.Push(s[j]);
                    else if (st.Peek() == 'A' && s[j] == 'B') st.Pop();
                    else if (st.Peek() == 'B' && s[j] == 'B') st.Pop();
                    else st.Push(s[j]);
                }

                Console.WriteLine(st.Count);
            }
        }
    }
}