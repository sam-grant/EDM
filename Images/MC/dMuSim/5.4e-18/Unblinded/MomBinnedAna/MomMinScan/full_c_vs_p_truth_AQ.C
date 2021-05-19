void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:44:55 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.04966327,3335,0.0157651);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1089[15] = {
   -0.03663053,
   -0.03608784,
   -0.03241546,
   -0.02477022,
   -0.01778003,
   -0.01516152,
   -0.01153132,
   -0.008302098,
   -0.005995506,
   -0.00350416,
   -0.003299726,
   -0.002945885,
   -0.003029552,
   0.001436821,
   -0.00695087};
   Double_t Graph0_fex1089[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1089[15] = {
   0.002128009,
   0.002117048,
   0.00208997,
   0.00204372,
   0.001981814,
   0.001943085,
   0.00193376,
   0.001953314,
   0.002007174,
   0.002103858,
   0.002250836,
   0.002474262,
   0.002821352,
   0.003423549,
   0.004691389};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","",100,-400,3200);
   Graph_Graph01089->SetMinimum(-0.04312043);
   Graph_Graph01089->SetMaximum(0.009222261);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01089->GetXaxis()->SetRange(8,93);
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
