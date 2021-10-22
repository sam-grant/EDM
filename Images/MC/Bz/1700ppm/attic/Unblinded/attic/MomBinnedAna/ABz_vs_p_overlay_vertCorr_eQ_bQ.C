void ABz_vs_p_overlay_vertCorr_eQ_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:03:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-2.5,1712,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1125[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0_ABz_vs_p_fy1125[8] = {
   0.2921627,
   0.2759191,
   0.2396992,
   0.1299287,
   0.1495594,
   0.08329514,
   0.1206427,
   0.1587446};
   Double_t S0_ABz_vs_p_fex1125[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_ABz_vs_p_fey1125[8] = {
   0.09303448,
   0.07927064,
   0.07104174,
   0.06603149,
   0.0625964,
   0.06039345,
   0.05835061,
   0.05712498};
   TGraphErrors *gre = new TGraphErrors(8,S0_ABz_vs_p_fx1125,S0_ABz_vs_p_fy1125,S0_ABz_vs_p_fex1125,S0_ABz_vs_p_fey1125);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1125 = new TH1F("Graph_S0_ABz_vs_p1125","",100,620,1580);
   Graph_S0_ABz_vs_p1125->SetMinimum(-2);
   Graph_S0_ABz_vs_p1125->SetMaximum(2);
   Graph_S0_ABz_vs_p1125->SetDirectory(0);
   Graph_S0_ABz_vs_p1125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1125->SetLineColor(ci);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1125->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1125->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1125->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1125->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1125);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1126[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S12_ABz_vs_p_fy1126[8] = {
   0.1922055,
   0.224078,
   0.2814572,
   0.1645857,
   0.07379525,
   0.2300022,
   0.2615264,
   0.2351336};
   Double_t S12_ABz_vs_p_fex1126[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_ABz_vs_p_fey1126[8] = {
   0.093053,
   0.07947759,
   0.07065317,
   0.06564741,
   0.06240867,
   0.05993262,
   0.0580574,
   0.05710215};
   gre = new TGraphErrors(8,S12_ABz_vs_p_fx1126,S12_ABz_vs_p_fy1126,S12_ABz_vs_p_fex1126,S12_ABz_vs_p_fey1126);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1126 = new TH1F("Graph_S12_ABz_vs_p1126","S12",100,620,1580);
   Graph_S12_ABz_vs_p1126->SetMinimum(0.01024792);
   Graph_S12_ABz_vs_p1126->SetMaximum(0.3861828);
   Graph_S12_ABz_vs_p1126->SetDirectory(0);
   Graph_S12_ABz_vs_p1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1126->SetLineColor(ci);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1126->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1126->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1126->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1126->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1126);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1127[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S18_ABz_vs_p_fy1127[8] = {
   0.1552493,
   0.08395508,
   0.2024634,
   0.1015205,
   0.2462458,
   0.1095474,
   0.1919578,
   0.1345401};
   Double_t S18_ABz_vs_p_fex1127[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_ABz_vs_p_fey1127[8] = {
   0.09279973,
   0.0792175,
   0.07005299,
   0.06496258,
   0.06240024,
   0.05975481,
   0.05853482,
   0.05715927};
   gre = new TGraphErrors(8,S18_ABz_vs_p_fx1127,S18_ABz_vs_p_fy1127,S18_ABz_vs_p_fex1127,S18_ABz_vs_p_fey1127);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1127 = new TH1F("Graph_S18_ABz_vs_p1127","S18",100,620,1580);
   Graph_S18_ABz_vs_p1127->SetMinimum(0.004263822);
   Graph_S18_ABz_vs_p1127->SetMaximum(0.3390368);
   Graph_S18_ABz_vs_p1127->SetDirectory(0);
   Graph_S18_ABz_vs_p1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1127->SetLineColor(ci);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1127->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1127->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1127->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1127->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1127);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1128[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0S12S18_ABz_vs_p_fy1128[8] = {
   0.2130187,
   0.19552,
   0.2417095,
   0.1332498,
   0.1559246,
   0.1406141,
   0.1909468,
   0.1779649};
   Double_t S0S12S18_ABz_vs_p_fex1128[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_ABz_vs_p_fey1128[8] = {
   0.05371011,
   0.04582392,
   0.04076997,
   0.03786349,
   0.0360889,
   0.03467824,
   0.03368782,
   0.0330064};
   gre = new TGraphErrors(8,S0S12S18_ABz_vs_p_fx1128,S0S12S18_ABz_vs_p_fy1128,S0S12S18_ABz_vs_p_fex1128,S0S12S18_ABz_vs_p_fey1128);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1128 = new TH1F("Graph_S0S12S18_ABz_vs_p1128","S0S12S18",100,620,1580);
   Graph_S0S12S18_ABz_vs_p1128->SetMinimum(0.07667703);
   Graph_S0S12S18_ABz_vs_p1128->SetMaximum(0.3011888);
   Graph_S0S12S18_ABz_vs_p1128->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1128->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1128->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1128->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1128);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
