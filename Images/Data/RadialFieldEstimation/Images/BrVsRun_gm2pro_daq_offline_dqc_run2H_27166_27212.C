void BrVsRun_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 06:39:00 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(27154.5,-0.4438194,27223.5,22.62357);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[20] = {
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
   Double_t Graph0_fy1003[20] = {
   10.15463,
   10.72239,
   10.94931,
   10.99038,
   11.03942,
   11.30458,
   11.27968,
   11.21142,
   11.41075,
   12.01479,
   11.60494,
   11.6793,
   11.4519,
   11.35936,
   11.31237,
   11.26254,
   10.75015,
   11.96914,
   11.22772,
   11.17562};
   Double_t Graph0_fex1003[20] = {
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
   Double_t Graph0_fey1003[20] = {
   6.753885,
   6.753325,
   6.753628,
   6.753616,
   6.753753,
   6.753971,
   6.753849,
   6.753779,
   6.754149,
   6.764216,
   6.754309,
   6.75475,
   6.754063,
   6.753899,
   6.753855,
   6.754289,
   6.77335,
   6.765419,
   6.753767,
   6.753766};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,27161.4,27216.6);
   Graph_Graph1003->SetMinimum(1.86292);
   Graph_Graph1003->SetMaximum(20.31683);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run number");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
