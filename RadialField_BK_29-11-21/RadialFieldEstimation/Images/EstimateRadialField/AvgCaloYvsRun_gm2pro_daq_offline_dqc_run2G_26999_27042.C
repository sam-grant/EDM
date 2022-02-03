void AvgCaloYvsRun_gm2pro_daq_offline_dqc_run2G_26999_27042()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 13 02:56:12 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(26988.25,75.10005,27052.75,75.50394);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t Graph0_fy1001[10] = {
   75.40428,
   75.27063,
   75.24505,
   75.22652,
   75.24616,
   75.22747,
   75.23128,
   75.21516,
   75.18983,
   75.17254};
   Double_t Graph0_fex1001[10] = {
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
   Double_t Graph0_fey1001[10] = {
   0.0323451,
   0.005034042,
   0.005275595,
   0.004383534,
   0.008747194,
   0.006524469,
   0.004799667,
   0.007788667,
   0.004343083,
   0.005178273};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,26994.7,27046.3);
   Graph_Graph1001->SetMinimum(75.14044);
   Graph_Graph1001->SetMaximum(75.46355);
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
