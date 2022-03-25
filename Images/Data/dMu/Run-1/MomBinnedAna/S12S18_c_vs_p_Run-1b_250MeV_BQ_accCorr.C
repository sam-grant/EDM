void S12S18_c_vs_p_Run-1b_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 12:01:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(470.8201,-0.1496625,3017.493,1.043365);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[11] = {
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
   Double_t Graph0_fy1105[11] = {
   2.030546,
   0.7391225,
   0.7648915,
   0.152422,
   -0.04050535,
   0.2381736,
   0.2589559,
   0.2580995,
   0.2510518,
   0.3117961,
   0.2139203};
   Double_t Graph0_fex1105[11] = {
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
   Double_t Graph0_fey1105[11] = {
   0.1126003,
   0.02894548,
   0.01433459,
   0.01130987,
   0.01010421,
   0.009695212,
   0.01030828,
   0.01087105,
   0.01198862,
   0.01356754,
   0.04613371};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","S12S18",100,223.13,3014.004);
   Graph_Graph01105->SetMinimum(-0.03035967);
   Graph_Graph01105->SetMaximum(0.9240625);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01105->GetXaxis()->SetRange(19,91);
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
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
