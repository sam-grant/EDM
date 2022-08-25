void S12S18_c_vs_p_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:21:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0556,-0.002411143,2704.044,0.008947502);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[11] = {
   456.032,
   654.9536,
   883.9248,
   1127.491,
   1373.326,
   1619.953,
   1866.968,
   2116.15,
   2359.851,
   2607.4,
   2781.73};
   Double_t Graph0_fy1105[11] = {
   0.0725449,
   -0.02729632,
   0.005733036,
   -0.001199546,
   -0.0002804697,
   0.001866329,
   -0.001598704,
   -0.001220194,
   0.004270809,
   0.006678963,
   0.04973277};
   Double_t Graph0_fex1105[11] = {
   0.112056,
   0.07831757,
   0.05238526,
   0.04759277,
   0.04687605,
   0.05184375,
   0.0629617,
   0.07911143,
   0.1034596,
   0.1428284,
   0.237467};
   Double_t Graph0_fey1105[11] = {
   0.1114402,
   0.02827096,
   0.0144401,
   0.01098415,
   0.009561206,
   0.009182978,
   0.009435983,
   0.01009754,
   0.01126804,
   0.013279,
   0.05074567};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","S12S18",100,223.3153,3014.572);
   Graph_Graph01105->SetMinimum(-0.001275278);
   Graph_Graph01105->SetMaximum(0.007811637);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01105->GetXaxis()->SetRange(28,82);
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
