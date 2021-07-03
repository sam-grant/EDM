void full_theta_Y_vs_p_truthAllDecays_AAR_200MeV_pypz_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul  1 11:10:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.2126445,3456.75,0.08306295);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[15] = {
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
   Double_t Graph0_fy1041[15] = {
   -0.1011373,
   -0.05983138,
   0.01472487,
   -0.01563706,
   0.002431736,
   -0.01312687,
   0.008020875,
   0.00619891,
   0.00359414,
   -0.003947978,
   0.003378128,
   0.01283062,
   0.002930855,
   0.01112789,
   0.002437699};
   Double_t Graph0_fex1041[15] = {
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
   Double_t Graph0_fey1041[15] = {
   0.06222263,
   0.02573894,
   0.0190535,
   0.01561737,
   0.01344602,
   0.0119289,
   0.01082359,
   0.009975701,
   0.009322881,
   0.008805903,
   0.008395677,
   0.008088395,
   0.007874706,
   0.007779332,
   0.007994405};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#LT#theta_{y}#GT [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","",100,0,3300);
   Graph_Graph01041->SetMinimum(-0.1830738);
   Graph_Graph01041->SetMaximum(0.0534922);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01041->GetXaxis()->SetRange(0,93);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
