int ones(string s) {
    if (s.length() == 0)
    {
        return 0;
    }
    else
    {
        if (s[0] == '1')
        {
            return ones(s.substr(1)) + 1;
        }
        else
        {
            return ones (s.substr(1));
        }
    }
}
