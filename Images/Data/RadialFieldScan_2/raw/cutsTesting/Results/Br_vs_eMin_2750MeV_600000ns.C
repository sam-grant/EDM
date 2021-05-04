void Br_vs_eMin_2750MeV_600000ns()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 27 07:04:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.49999,-3.5,1737.5,1.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph0_fy1007[6] = {
   -1.842082,
   -1.755813,
   -1.737475,
   -1.611211,
   -1.43377,
   -1.859593};
   Double_t Graph0_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1007[6] = {
   0.3499998,
   0.3707001,
   0.4001029,
   0.435616,
   0.4845392,
   0.5525253};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#LT B_{r}^{Bkg} #GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","",100,125,1625);
   Graph_Graph01007->SetMinimum(-3);
   Graph_Graph01007->SetMaximum(1);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01007->GetXaxis()->SetRange(5,96);
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#LT B_{r}^{Bkg} #GT [ppm]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1008[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph1_fy1008[6] = {
   -1.278532,
   -0.9194374,
   -0.91288,
   -0.4225435,
   -0.0882258,
   -0.1893413};
   Double_t Graph1_fex1008[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1008[6] = {
   0.4510961,
   0.4909638,
   0.5330831,
   0.5924693,
   0.6704416,
   0.7786009};
   gre = new TGraphErrors(6,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Graph",100,125,1625);
   Graph_Graph11008->SetMinimum(-1.961517);
   Graph_Graph11008->SetMaximum(0.8211484);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11008->SetLineColor(ci);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1009[6] = {
   250,
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph2_fy1009[6] = {
   -1.456587,
   -1.121618,
   -1.067651,
   -0.6176009,
   -0.3249195,
   -0.3424373};
   Double_t Graph2_fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1009[6] = {
   0.4751507,
   0.5113122,
   0.5603758,
   0.6254174,
   0.7075326,
   0.8249374};
   gre = new TGraphErrors(6,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Graph",100,125,1625);
   Graph_Graph21009->SetMinimum(-2.173162);
   Graph_Graph21009->SetMaximum(0.723924);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21009->SetLineColor(ci);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.15,0.79,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t > 0 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t > 24 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t > 30 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
