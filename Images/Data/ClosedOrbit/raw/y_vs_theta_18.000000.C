void y_vs_theta_18.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 16:30:52 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,72.5946,443.8125,77.26194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1004[24] = {
   74.67357,
   74.34733,
   75.44803,
   74.29333,
   74.71908,
   76.26332,
   76.43178,
   75.19619,
   73.42338,
   74.59274,
   73.94693,
   74.79725,
   75.239,
   74.21916,
   76.29545,
   74.5505,
   74.55696,
   74.47634,
   74.15465,
   74.58945,
   73.84578,
   73.67219,
   74.22162,
   75.19333};
   Double_t Graph0_fex1004[24] = {
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
   0,
   0};
   Double_t Graph0_fey1004[24] = {
   0.04683969,
   0.04835445,
   0.04736634,
   0.04757455,
   0.04213288,
   0.04863184,
   0.05227174,
   0.05280047,
   0.05089029,
   0.05304025,
   0.0468295,
   0.04843484,
   0.04253498,
   0.04730738,
   0.04500684,
   0.04997962,
   0.05094711,
   0.04811341,
   0.04552686,
   0.05206595,
   0.04743588,
   0.04625635,
   0.04485865,
   0.05482858};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];y [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",100,0,394.5);
   Graph_Graph01004->SetMinimum(73.06133);
   Graph_Graph01004->SetMaximum(76.7952);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
