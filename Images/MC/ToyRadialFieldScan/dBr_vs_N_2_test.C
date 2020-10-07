void dBr_vs_N_2_test()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-423634,0.2692436,8935911,2.309505);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[8] = {
   941719,
   1907070,
   2868350,
   3792450,
   4758730,
   5723860,
   6686380,
   7651070};
   Double_t Graph0_fy1082[8] = {
   1.809676,
   1.265533,
   1.030411,
   0.8944153,
   0.7990281,
   0.7288843,
   0.6738858,
   0.6288689};
   Double_t Graph0_fex1082[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1082[8] = {
   0.1597861,
   0.07728312,
   0.05174782,
   0.03908624,
   0.03138462,
   0.02695073,
   0.02253522,
   0.01958167};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGS;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010811082 = new TH1F("Graph_Graph_Graph010811082","",100,270783.9,8322005);
   Graph_Graph_Graph010811082->SetMinimum(0.4732698);
   Graph_Graph_Graph010811082->SetMaximum(2.105479);
   Graph_Graph_Graph010811082->SetDirectory(0);
   Graph_Graph_Graph010811082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010811082->SetLineColor(ci);
   Graph_Graph_Graph010811082->GetXaxis()->SetTitle("CTAGS");
   Graph_Graph_Graph010811082->GetXaxis()->SetRange(4,96);
   Graph_Graph_Graph010811082->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010811082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010811082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010811082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010811082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010811082->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Graph_Graph010811082->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010811082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010811082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010811082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010811082->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010811082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010811082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010811082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010811082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010811082);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
