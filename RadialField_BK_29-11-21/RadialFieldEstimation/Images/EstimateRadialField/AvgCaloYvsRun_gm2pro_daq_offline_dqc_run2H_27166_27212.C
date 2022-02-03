void AvgCaloYvsRun_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 13 02:56:16 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(27154.5,75.2159,27223.5,75.39466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[20] = {
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
   Double_t Graph0_fy1001[20] = {
   75.25294,
   75.28141,
   75.29279,
   75.29485,
   75.29731,
   75.31061,
   75.30936,
   75.30594,
   75.31593,
   75.34622,
   75.32567,
   75.3294,
   75.318,
   75.31336,
   75.311,
   75.3085,
   75.2828,
   75.34394,
   75.30675,
   75.30414};
   Double_t Graph0_fex1001[20] = {
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
   Double_t Graph0_fey1001[20] = {
   0.007243271,
   0.00411153,
   0.004518121,
   0.004336323,
   0.004688492,
   0.004615958,
   0.004234229,
   0.004199361,
   0.004909506,
   0.01863978,
   0.004850576,
   0.006015309,
   0.004462059,
   0.00414713,
   0.004141768,
   0.005778582,
   0.02640636,
   0.01974407,
   0.004089414,
   0.004274487};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,27161.4,27216.6);
   Graph_Graph1001->SetMinimum(75.23378);
   Graph_Graph1001->SetMaximum(75.37678);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Run number");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy_{Calo}#GT [mm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
