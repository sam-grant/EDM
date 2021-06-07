void A_vs_p_max_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:43:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.135,3550,0.285);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1007[12] = {
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
   Double_t A_vs_p_fy1007[12] = {
   0.2224163,
   0.22516,
   0.2291757,
   0.2347497,
   0.2399731,
   0.2453373,
   0.2495489,
   0.2542276,
   0.2569409,
   0.2535826,
   0.2512608,
   0.2341642};
   Double_t A_vs_p_fex1007[12] = {
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
   Double_t A_vs_p_fey1007[12] = {
   0.002860994,
   0.002902146,
   0.002989121,
   0.003127075,
   0.003326074,
   0.003605405,
   0.003993286,
   0.004536189,
   0.005316015,
   0.006513278,
   0.008611461,
   0.0134056};
   TGraphErrors *gre = new TGraphErrors(12,A_vs_p_fx1007,A_vs_p_fy1007,A_vs_p_fex1007,A_vs_p_fey1007);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1007 = new TH1F("Graph_A_vs_p1007","",100,580,3220);
   Graph_A_vs_p1007->SetMinimum(0.15);
   Graph_A_vs_p1007->SetMaximum(0.27);
   Graph_A_vs_p1007->SetDirectory(0);
   Graph_A_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1007->SetLineColor(ci);
   Graph_A_vs_p1007->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_A_vs_p1007->GetXaxis()->SetRange(1,100);
   Graph_A_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1007);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1008[12] = {
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
   Double_t S0S12S18_A_vs_p_fy1008[12] = {
   0.1708695,
   0.1716519,
   0.1731025,
   0.1745661,
   0.1767832,
   0.1792885,
   0.1818938,
   0.1869343,
   0.1873069,
   0.1927444,
   0.2215897,
   0.2047883};
   Double_t S0S12S18_A_vs_p_fex1008[12] = {
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
   Double_t S0S12S18_A_vs_p_fey1008[12] = {
   0.01020624,
   0.01026296,
   0.01042659,
   0.01067749,
   0.01107831,
   0.01168406,
   0.01256807,
   0.01385092,
   0.01572493,
   0.01859592,
   0.02359316,
   0.0352395};
   gre = new TGraphErrors(12,S0S12S18_A_vs_p_fx1008,S0S12S18_A_vs_p_fy1008,S0S12S18_A_vs_p_fex1008,S0S12S18_A_vs_p_fey1008);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1008 = new TH1F("Graph_S0S12S18_A_vs_p1008","S0S12S18",100,580,3220);
   Graph_S0S12S18_A_vs_p1008->SetMinimum(0.1522113);
   Graph_S0S12S18_A_vs_p1008->SetMaximum(0.2536348);
   Graph_S0S12S18_A_vs_p1008->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1008->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetRange(1,100);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1008);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
