void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:09:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.0001892645,3456.75,0.00225007);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1177[15] = {
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
   Double_t Graph0_fy1177[15] = {
   0.001044967,
   0.000282211,
   8.825591e-05,
   0.0001823916,
   0.0002380704,
   0.0003068798,
   0.0005955738,
   0.0004248771,
   0.0007819328,
   0.0008626736,
   0.0007193056,
   0.000724778,
   0.0006900022,
   0.0007353273,
   0.0001522027};
   Double_t Graph0_fex1177[15] = {
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
   Double_t Graph0_fey1177[15] = {
   0.0007843157,
   8.704933e-05,
   2.751262e-05,
   2.111652e-05,
   2.418935e-05,
   3.370393e-05,
   5.373301e-05,
   3.512912e-05,
   6.749423e-05,
   7.888288e-05,
   8.524149e-05,
   0.000109977,
   0.0001054717,
   0.0001573562,
   5.156684e-05};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1177,Graph0_fy1177,Graph0_fex1177,Graph0_fey1177);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01177 = new TH1F("Graph_Graph01177","",100,0,3300);
   Graph_Graph01177->SetMinimum(5.466896e-05);
   Graph_Graph01177->SetMaximum(0.002006136);
   Graph_Graph01177->SetDirectory(0);
   Graph_Graph01177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01177->SetLineColor(ci);
   Graph_Graph01177->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01177->GetXaxis()->SetRange(0,93);
   Graph_Graph01177->GetXaxis()->CenterTitle(true);
   Graph_Graph01177->GetXaxis()->SetLabelFont(42);
   Graph_Graph01177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01177->GetXaxis()->SetTitleFont(42);
   Graph_Graph01177->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01177->GetYaxis()->CenterTitle(true);
   Graph_Graph01177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01177->GetYaxis()->SetLabelFont(42);
   Graph_Graph01177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01177->GetYaxis()->SetTitleFont(42);
   Graph_Graph01177->GetZaxis()->SetLabelFont(42);
   Graph_Graph01177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01177);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
