void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:08:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7934,-9.988521e-05,2703.519,0.008323893);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
   455.7969,
   654.7653,
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525,
   2607.531,
   2781.233};
   Double_t Graph0_fy1115[11] = {
   0.009373483,
   0.00440178,
   0.002869185,
   0.002034453,
   0.001804421,
   0.001313466,
   0.001526894,
   0.003646673,
   0.006245548,
   0.000523642,
   0.03303745};
   Double_t Graph0_fex1115[11] = {
   0.09410864,
   0.06648538,
   0.04456566,
   0.04050181,
   0.03992305,
   0.04410202,
   0.05363618,
   0.06745903,
   0.08830392,
   0.12202,
   0.1984395};
   Double_t Graph0_fey1115[11] = {
   0.004229897,
   0.001383997,
   0.0008917446,
   0.0007946385,
   0.0007935403,
   0.0008775279,
   0.001061067,
   0.001331889,
   0.001767728,
   0.002537615,
   0.01087147};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,223.13,3014.004);
   Graph_Graph01115->SetMinimum(0.0007424926);
   Graph_Graph01115->SetMaximum(0.007481515);
   Graph_Graph01115->SetDirectory(0);
   Graph_Graph01115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01115->SetLineColor(ci);
   Graph_Graph01115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01115->GetXaxis()->SetRange(28,82);
   Graph_Graph01115->GetXaxis()->CenterTitle(true);
   Graph_Graph01115->GetXaxis()->SetLabelFont(42);
   Graph_Graph01115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01115->GetXaxis()->SetTitleFont(42);
   Graph_Graph01115->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01115->GetYaxis()->CenterTitle(true);
   Graph_Graph01115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01115->GetYaxis()->SetLabelFont(42);
   Graph_Graph01115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01115->GetYaxis()->SetTitleFont(42);
   Graph_Graph01115->GetZaxis()->SetLabelFont(42);
   Graph_Graph01115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01115);
   
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
