void S12_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-0.03744585,3016.181,0.02988326);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[21] = {
   372.4235,
   456.1787,
   569.87,
   695.8091,
   815.8418,
   938.8441,
   1062.299,
   1188.5,
   1313.017,
   1435.605,
   1561.235,
   1685.671,
   1810.509,
   1935.081,
   2060.699,
   2185.29,
   2309.013,
   2433.545,
   2560.565,
   2678.061,
   2780.05};
   Double_t Graph0_fy1027[21] = {
   0.3966104,
   0.07558168,
   0.03448145,
   -0.02613701,
   0.005350436,
   0.01071002,
   0.008931241,
   -0.0100529,
   0.006669994,
   0.01955853,
   0.01193895,
   0.009341934,
   0.006034891,
   -0.0394586,
   -0.01219883,
   0.02011052,
   -0.02159407,
   0.001186025,
   0.01982177,
   -0.01923139,
   0.02627087};
   Double_t Graph0_fex1027[21] = {
   0.5744707,
   1.372971,
   0.9209827,
   0.5946061,
   0.4787511,
   0.4270488,
   0.403261,
   0.3854228,
   0.3985205,
   0.3966175,
   0.4212256,
   0.4473419,
   0.4900027,
   0.5441462,
   0.6016588,
   0.691145,
   0.7876235,
   0.9152903,
   1.101754,
   1.277905,
   2.31207};
   Double_t Graph0_fey1027[21] = {
   1.309406,
   0.05891889,
   0.03545508,
   -0.02360423,
   0.01891702,
   0.01660036,
   0.01575398,
   -0.01518629,
   0.01543463,
   0.01557791,
   0.01646871,
   0.0173795,
   0.01918959,
   -0.02103968,
   -0.02406818,
   0.02675979,
   -0.03007357,
   0.03440987,
   0.04266366,
   -0.05203358,
   0.08569083};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S12",100,130.7977,3023.413);
   Graph_Graph01027->SetMinimum(-0.03071294);
   Graph_Graph01027->SetMaximum(0.02315035);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(22,91);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
