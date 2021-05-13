void EDM_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-4.625,3378.375,1.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1168[15] = {
   100,
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
   Double_t S0_AEDM_vs_p_fy1168[15] = {
   -1.075566,
   0.1312913,
   0.06954245,
   0.1269425,
   0.2218667,
   0.1773994,
   0.1991648,
   0.1736365,
   0.1376582,
   0.1837479,
   0.1478949,
   0.1588962,
   0.1087298,
   0.05656619,
   0.06730219};
   Double_t S0_AEDM_vs_p_fex1168[15] = {
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
   Double_t S0_AEDM_vs_p_fey1168[15] = {
   1.033666,
   0.155752,
   0.05390591,
   0.04062242,
   0.03547083,
   0.03189833,
   0.02922621,
   0.02721596,
   0.02565431,
   0.02459104,
   0.0240299,
   0.02364268,
   0.02373611,
   0.02425785,
   0.03438382};
   TGraphErrors *gre = new TGraphErrors(15,S0_AEDM_vs_p_fx1168,S0_AEDM_vs_p_fy1168,S0_AEDM_vs_p_fex1168,S0_AEDM_vs_p_fey1168);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1168 = new TH1F("Graph_S0_AEDM_vs_p1168","",100,0,3300);
   Graph_S0_AEDM_vs_p1168->SetMinimum(-4);
   Graph_S0_AEDM_vs_p1168->SetMaximum(1);
   Graph_S0_AEDM_vs_p1168->SetDirectory(0);
   Graph_S0_AEDM_vs_p1168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1168->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetRange(1,91);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1168);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1169[15] = {
   100,
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
   Double_t S12_AEDM_vs_p_fy1169[15] = {
   -0.8569257,
   0.1362854,
   0.08443404,
   0.2276698,
   0.2093573,
   0.1839369,
   0.1528023,
   0.2003308,
   0.1391721,
   0.1505804,
   0.1076964,
   0.1271218,
   0.1264405,
   0.1201911,
   -0.006297367};
   Double_t S12_AEDM_vs_p_fex1169[15] = {
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
   Double_t S12_AEDM_vs_p_fey1169[15] = {
   0.9735398,
   0.1506029,
   0.05409812,
   0.04055861,
   0.03548464,
   0.03201145,
   0.02941736,
   0.02729539,
   0.02578298,
   0.02474448,
   0.02421661,
   0.02394967,
   0.02419308,
   0.02503934,
   0.03558779};
   gre = new TGraphErrors(15,S12_AEDM_vs_p_fx1169,S12_AEDM_vs_p_fy1169,S12_AEDM_vs_p_fex1169,S12_AEDM_vs_p_fey1169);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1169 = new TH1F("Graph_S12_AEDM_vs_p1169","S12",100,0,3300);
   Graph_S12_AEDM_vs_p1169->SetMinimum(-2.042201);
   Graph_S12_AEDM_vs_p1169->SetMaximum(0.4986237);
   Graph_S12_AEDM_vs_p1169->SetDirectory(0);
   Graph_S12_AEDM_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1169->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetRange(1,91);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1169);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1170[15] = {
   100,
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
   Double_t S18_AEDM_vs_p_fy1170[15] = {
   -2.375619,
   0.4393692,
   0.04553157,
   0.2125956,
   0.1283443,
   0.1138672,
   0.1853275,
   0.1889617,
   0.1699997,
   0.1313243,
   0.1656563,
   0.1234503,
   0.1346926,
   0.07137881,
   0.02576305};
   Double_t S18_AEDM_vs_p_fex1170[15] = {
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
   Double_t S18_AEDM_vs_p_fey1170[15] = {
   1.007087,
   0.153317,
   0.05420082,
   0.04060075,
   0.03554198,
   0.03218414,
   0.02956386,
   0.02751175,
   0.02590008,
   0.02496419,
   0.02447015,
   0.02403601,
   0.02443254,
   0.02532632,
   0.03697091};
   gre = new TGraphErrors(15,S18_AEDM_vs_p_fx1170,S18_AEDM_vs_p_fy1170,S18_AEDM_vs_p_fex1170,S18_AEDM_vs_p_fey1170);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1170 = new TH1F("Graph_S18_AEDM_vs_p1170","S18",100,0,3300);
   Graph_S18_AEDM_vs_p1170->SetMinimum(-3.780246);
   Graph_S18_AEDM_vs_p1170->SetMaximum(0.9902254);
   Graph_S18_AEDM_vs_p1170->SetDirectory(0);
   Graph_S18_AEDM_vs_p1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1170->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetRange(1,91);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1170->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1170);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_AEDM_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p","S18","lpf");
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
