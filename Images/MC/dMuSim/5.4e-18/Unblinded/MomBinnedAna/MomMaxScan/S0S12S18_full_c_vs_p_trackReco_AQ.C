void S0S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.4658635,3550,-0.1158846);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1544[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1544[12] = {
   -0.1814737,
   -0.1826227,
   -0.1845236,
   -0.1869759,
   -0.1903924,
   -0.1992032,
   -0.2067232,
   -0.2201492,
   -0.234972,
   -0.2613882,
   -0.2967718,
   -0.3825764};
   Double_t Graph0_fex1544[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1544[12] = {
   0.007259233,
   0.007295543,
   0.007403239,
   0.007572672,
   0.007847839,
   0.008270141,
   0.008890263,
   0.009794182,
   0.01112056,
   0.01315993,
   0.01670039,
   0.02495729};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1544,Graph0_fy1544,Graph0_fex1544,Graph0_fey1544);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01544 = new TH1F("Graph_Graph01544","S0S12S18",100,580,3220);
   Graph_Graph01544->SetMinimum(-0.4308656);
   Graph_Graph01544->SetMaximum(-0.1508825);
   Graph_Graph01544->SetDirectory(0);
   Graph_Graph01544->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01544->SetLineColor(ci);
   Graph_Graph01544->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01544->GetXaxis()->SetRange(1,100);
   Graph_Graph01544->GetXaxis()->CenterTitle(true);
   Graph_Graph01544->GetXaxis()->SetLabelFont(42);
   Graph_Graph01544->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01544->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01544->GetXaxis()->SetTitleFont(42);
   Graph_Graph01544->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01544->GetYaxis()->CenterTitle(true);
   Graph_Graph01544->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01544->GetYaxis()->SetLabelFont(42);
   Graph_Graph01544->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01544->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01544->GetYaxis()->SetTitleFont(42);
   Graph_Graph01544->GetZaxis()->SetLabelFont(42);
   Graph_Graph01544->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01544->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01544);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
