void S12S18_Momentum_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8227,10.77328,2722.442,22.47107);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
   367.2033,
   457.0147,
   570.1003,
   694.7422,
   815.8159,
   938.5085,
   1062.735,
   1188.193,
   1312.674,
   1435.759,
   1561.971,
   1685.095,
   1810.525,
   1934.999,
   2060.258,
   2184.864,
   2309.08,
   2433.07,
   2559.684,
   2678.57,
   2781.109,
   2885.371};
   Double_t Graph0_fy1038[22] = {
   12.90335,
   14.24347,
   15.14487,
   16.15222,
   16.57683,
   17.54537,
   18.34448,
   19.09872,
   19.75241,
   20.1511,
   20.51316,
   20.24498,
   20.15363,
   19.72861,
   19.31926,
   18.72523,
   17.93926,
   16.87814,
   15.78721,
   14.63793,
   13.77621,
   13.92529};
   Double_t Graph0_fex1038[22] = {
   0.1223124,
   0.06036459,
   0.04024824,
   0.0277788,
   0.02243236,
   0.02027873,
   0.01924623,
   0.01865073,
   0.01899693,
   0.01911444,
   0.02059145,
   0.0217368,
   0.02457288,
   0.02694885,
   0.0308822,
   0.03415244,
   0.03960077,
   0.04777372,
   0.05698453,
   0.06530988,
   0.133844,
   0.8128393};
   Double_t Graph0_fey1038[22] = {
   0.1804355,
   0.02005542,
   0.01218082,
   0.008988419,
   0.007341658,
   0.006962809,
   0.006946819,
   0.007025069,
   0.007324567,
   0.007595239,
   0.00827544,
   0.008666785,
   0.009698373,
   0.01046708,
   0.01168195,
   0.01258241,
   0.01395286,
   0.0158664,
   0.01765728,
   0.01994901,
   0.05139017,
   0.938843};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S12S18",100,115.1707,3138.094);
   Graph_Graph01038->SetMinimum(11.94306);
   Graph_Graph01038->SetMaximum(21.30129);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(22,79);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
