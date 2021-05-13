void deltaY_gm2pro_daq_offline_dqc_run2H_27166_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:41:21 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(27154.5,0.5068322,27223.5,0.6857023);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[20] = {
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
   Double_t Graph0_fy1005[20] = {
   0.5439439,
   0.5724164,
   0.583796,
   0.5858557,
   0.5883148,
   0.6016124,
   0.6003637,
   0.5969407,
   0.6069367,
   0.6372287,
   0.6166749,
   0.6204043,
   0.6090003,
   0.6043596,
   0.602003,
   0.5995041,
   0.5738084,
   0.6349395,
   0.5977581,
   0.5951453};
   Double_t Graph0_fex1005[20] = {
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
   Double_t Graph0_fey1005[20] = {
   0.007300057,
   0.004210765,
   0.004608609,
   0.004430527,
   0.004775753,
   0.004704565,
   0.004330654,
   0.004296569,
   0.004992906,
   0.01866192,
   0.004934972,
   0.006083568,
   0.004553661,
   0.004245533,
   0.004240295,
   0.005849605,
   0.02642199,
   0.01976497,
   0.004189173,
   0.004370024};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#Delta#LTy_{calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,27161.4,27216.6);
   Graph_Graph1005->SetMinimum(0.5247192);
   Graph_Graph1005->SetMaximum(0.6678153);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run number");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
