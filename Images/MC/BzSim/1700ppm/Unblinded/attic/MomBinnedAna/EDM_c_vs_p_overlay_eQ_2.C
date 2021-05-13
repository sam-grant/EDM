void EDM_c_vs_p_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 11:49:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-377.2,-2.5,3394.8,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1107[14] = {
   -2.022181,
   -1.259571,
   -0.1462918,
   -0.03982392,
   -0.0543355,
   0.002944227,
   -0.02380997,
   -0.06133254,
   -0.05310131,
   0.0002637641,
   -0.007792722,
   -0.01850997,
   -0.0438399,
   -0.04088334};
   Double_t Graph0_fex1107[14] = {
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
   Double_t Graph0_fey1107[14] = {
   0.111636,
   0.03838883,
   0.02889071,
   0.02508947,
   0.02265998,
   0.02079746,
   0.01933688,
   0.01818952,
   0.01751547,
   0.01706479,
   0.01679277,
   0.01671551,
   0.01728161,
   0.02431769};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010451107 = new TH1F("Graph_Graph_Graph010451107","",100,0,3280);
   Graph_Graph_Graph010451107->SetMinimum(-2);
   Graph_Graph_Graph010451107->SetMaximum(2);
   Graph_Graph_Graph010451107->SetDirectory(0);
   Graph_Graph_Graph010451107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010451107->SetLineColor(ci);
   Graph_Graph_Graph010451107->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010451107->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph010451107->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010451107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010451107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010451107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010451107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010451107->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph010451107->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010451107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010451107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010451107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010451107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010451107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010451107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010451107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010451107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010451107);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1108[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1108[14] = {
   -2.779686,
   -1.559144,
   -0.587565,
   -0.400137,
   -0.3211365,
   -0.2632785,
   -0.2031966,
   -0.1723264,
   -0.1550761,
   -0.1084759,
   -0.09686586,
   -0.09196543,
   -0.09432165,
   -0.05871385};
   Double_t Graph0_fex1108[14] = {
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
   Double_t Graph0_fey1108[14] = {
   0.107764,
   0.03856633,
   0.02893167,
   0.02523383,
   0.02278935,
   0.02087719,
   0.01946032,
   0.01831607,
   0.01764587,
   0.01722989,
   0.01694234,
   0.01704324,
   0.01764054,
   0.02541465};
   gre = new TGraphErrors(14,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010751108 = new TH1F("Graph_Graph_Graph010751108","S12",100,0,3280);
   Graph_Graph_Graph010751108->SetMinimum(-3.172865);
   Graph_Graph_Graph010751108->SetMaximum(0.2521159);
   Graph_Graph_Graph010751108->SetDirectory(0);
   Graph_Graph_Graph010751108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010751108->SetLineColor(ci);
   Graph_Graph_Graph010751108->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010751108->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph010751108->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010751108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010751108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010751108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010751108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010751108->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph010751108->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010751108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010751108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010751108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010751108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010751108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010751108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010751108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010751108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010751108);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1109[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1109[14] = {
   -2.589442,
   -1.421175,
   -0.4846265,
   -0.3096358,
   -0.2234184,
   -0.2018402,
   -0.1758376,
   -0.1431684,
   -0.1205136,
   -0.1058157,
   -0.1057133,
   -0.07063166,
   -0.0968056,
   0.01812878};
   Double_t Graph0_fex1109[14] = {
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
   Double_t Graph0_fey1109[14] = {
   0.1102492,
   0.03866279,
   0.0289287,
   0.02527166,
   0.0228786,
   0.02101884,
   0.01956502,
   0.01845947,
   0.01777527,
   0.01733338,
   0.01714585,
   0.01728435,
   0.01798051,
   0.02618666};
   gre = new TGraphErrors(14,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph011051109 = new TH1F("Graph_Graph_Graph011051109","S18",100,0,3280);
   Graph_Graph_Graph011051109->SetMinimum(-2.974091);
   Graph_Graph_Graph011051109->SetMaximum(0.3187161);
   Graph_Graph_Graph011051109->SetDirectory(0);
   Graph_Graph_Graph011051109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph011051109->SetLineColor(ci);
   Graph_Graph_Graph011051109->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph011051109->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph011051109->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph011051109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph011051109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011051109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph011051109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph011051109->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph011051109->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph011051109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph011051109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph011051109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011051109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph011051109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph011051109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph011051109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph011051109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph011051109);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","S18","lpf");
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
