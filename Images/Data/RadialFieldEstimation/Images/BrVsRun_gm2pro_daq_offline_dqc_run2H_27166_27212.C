void BrVsRun_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:41:21 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(27154.5,0.7870485,27223.5,5.567586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[20] = {
   27166,
   27188,
   27189,
   27190,
   27191,
   27192,
   27193,
   27194,
   27195,
   27196,
   27197,
   27201,
   27203,
   27204,
   27205,
   27206,
   27207,
   27210,
   27211,
   27212};
   Double_t Graph0_fy1006[20] = {
   2.198393,
   2.766153,
   2.99307,
   3.034142,
   3.083177,
   3.34834,
   3.32344,
   3.255183,
   3.45451,
   4.058553,
   3.648696,
   3.723064,
   3.49566,
   3.403122,
   3.356128,
   3.3063,
   2.79391,
   4.012905,
   3.271482,
   3.219382};
   Double_t Graph0_fex1006[20] = {
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
   Double_t Graph0_fey1006[20] = {
   0.6145878,
   0.6058814,
   0.6082376,
   0.6079325,
   0.6092359,
   0.6104695,
   0.6092299,
   0.6087564,
   0.6119707,
   0.7122762,
   0.6128801,
   0.6173939,
   0.610838,
   0.6094355,
   0.6091588,
   0.6141613,
   0.7986324,
   0.7237825,
   0.6085487,
   0.6087673};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,27161.4,27216.6);
   Graph_Graph1006->SetMinimum(1.265102);
   Graph_Graph1006->SetMaximum(5.089532);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run number");
   Graph_Graph1006->GetXaxis()->CenterTitle(true);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   Graph_Graph1006->GetYaxis()->CenterTitle(true);
   Graph_Graph1006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
