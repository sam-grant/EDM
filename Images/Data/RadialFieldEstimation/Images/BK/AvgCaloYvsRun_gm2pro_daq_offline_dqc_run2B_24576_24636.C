void AvgCaloYvsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 16:16:49 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24561,74.95101,24651,75.20592);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[29] = {
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
   Double_t Graph0_fy1001[29] = {
   75.11187,
   75.08533,
   75.07521,
   75.06153,
   75.05839,
   75.05865,
   75.04764,
   75.03574,
   75.03889,
   75.03472,
   75.03762,
   75.03294,
   75.0179,
   75.01858,
   75.01337,
   74.99934,
   75.00221,
   75.00215,
   75.00772,
   75.01343,
   75.04736,
   75.03783,
   75.05152,
   75.12173,
   75.07255,
   75.10161,
   75.10879,
   75.11772,
   75.12213};
   Double_t Graph0_fex1001[29] = {
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
   Double_t Graph0_fey1001[29] = {
   0.01142427,
   0.004232115,
   0.003959521,
   0.00584089,
   0.003926248,
   0.004002829,
   0.003733321,
   0.003892769,
   0.003869976,
   0.003657328,
   0.004034716,
   0.003849302,
   0.00402563,
   0.005517889,
   0.00409007,
   0.00584971,
   0.003985329,
   0.003742582,
   0.003776255,
   0.003919733,
   0.003992412,
   0.004586035,
   0.004582997,
   0.04170541,
   0.005445803,
   0.003845923,
   0.003706679,
   0.003758775,
   0.003901417};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTy_{Calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,24570,24642);
   Graph_Graph1001->SetMinimum(74.9765);
   Graph_Graph1001->SetMaximum(75.18043);
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
