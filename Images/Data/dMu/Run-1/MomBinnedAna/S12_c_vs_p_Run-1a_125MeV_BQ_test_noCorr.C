void S12_c_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-0.3864988,3016.181,0.6048407);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[21] = {
   372.4235,
   456.1787,
   569.8565,
   695.7956,
   815.8406,
   938.8431,
   1062.268,
   1188.496,
   1313.001,
   1435.615,
   1561.248,
   1685.663,
   1810.498,
   1935.113,
   2060.699,
   2185.294,
   2308.986,
   2433.523,
   2560.565,
   2678.061,
   2780.05};
   Double_t Graph0_fy1017[21] = {
   -7.938873,
   2.944384,
   -0.247038,
   0.2741169,
   0.1049046,
   -0.3261549,
   0.1468753,
   0.08303037,
   -0.02436871,
   0.3187803,
   0.1531929,
   0.1243762,
   0.1404481,
   0.04796507,
   0.4235131,
   0.2474363,
   -0.2157636,
   -0.3633819,
   0.2940166,
   -0.5358778,
   -1.305665};
   Double_t Graph0_fex1017[21] = {
   0.5744707,
   1.372971,
   0.9204915,
   0.5946211,
   0.4788613,
   0.4270458,
   0.4033724,
   0.3854577,
   0.3985899,
   0.3965988,
   0.4212324,
   0.4473766,
   0.4901187,
   0.5443475,
   0.6016588,
   0.6913792,
   0.7875296,
   0.9149783,
   1.101754,
   1.277905,
   2.31207};
   Double_t Graph0_fey1017[21] = {
   242.6585,
   1.292187,
   0.6909145,
   0.3945271,
   0.2731228,
   0.2205976,
   0.1945539,
   0.1743455,
   0.1633479,
   0.1541268,
   0.1553083,
   0.1476278,
   0.1502153,
   0.1515998,
   0.158528,
   0.1649231,
   0.1729357,
   0.1716665,
   0.1921245,
   0.1897392,
   0.2576274};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,130.7977,3023.413);
   Graph_Graph01017->SetMinimum(-0.2873648);
   Graph_Graph01017->SetMaximum(0.5057068);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(22,91);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
