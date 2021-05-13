void BrVsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:40:15 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(24561,-4.461261,24651,1.611546);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t Graph0_fy1006[29] = {
   -0.6145754,
   -1.143769,
   -1.345578,
   -1.618394,
   -1.68115,
   -1.675965,
   -1.89546,
   -2.132743,
   -2.069975,
   -2.153002,
   -2.095222,
   -2.188455,
   -2.488472,
   -2.474977,
   -2.578732,
   -2.85853,
   -2.801415,
   -2.80246,
   -2.691486,
   -2.577659,
   -1.901045,
   -2.091024,
   -1.817958,
   -0.4179875,
   -1.398639,
   -0.8191793,
   -0.676014,
   -0.4979149,
   -0.4100727};
   Double_t Graph0_fex1006[29] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1006[29] = {
   0.6281448,
   0.5896795,
   0.5882983,
   0.5936927,
   0.5872158,
   0.5874363,
   0.5861133,
   0.5858898,
   0.5859949,
   0.5852335,
   0.5863699,
   0.5856309,
   0.5853539,
   0.5902035,
   0.5853165,
   0.590597,
   0.5845182,
   0.5838775,
   0.5842149,
   0.5848554,
   0.5867766,
   0.5879902,
   0.5887192,
   1.017399,
   0.5928436,
   0.589685,
   0.5898159,
   0.5905669,
   0.5912466};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,24570,24642);
   Graph_Graph1006->SetMinimum(-3.85398);
   Graph_Graph1006->SetMaximum(1.004266);
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
