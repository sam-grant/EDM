void deltaY_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 05:29:02 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24561,0.4892197,24651,0.7441467);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[29] = {
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
   Double_t Graph0_fy1002[29] = {
   0.6500941,
   0.6235557,
   0.6134352,
   0.5997538,
   0.5966067,
   0.5968667,
   0.5858593,
   0.5739599,
   0.5771076,
   0.5729439,
   0.5758415,
   0.5711659,
   0.5561205,
   0.5567972,
   0.5515941,
   0.5375625,
   0.5404268,
   0.5403744,
   0.5459396,
   0.5516479,
   0.5855792,
   0.576052,
   0.5897459,
   0.6599527,
   0.6107743,
   0.6398335,
   0.647013,
   0.6559445,
   0.6603497};
   Double_t Graph0_fex1002[29] = {
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
   Double_t Graph0_fey1002[29] = {
   0.01142697,
   0.004239397,
   0.003967303,
   0.005846168,
   0.003934096,
   0.004010527,
   0.003741574,
   0.003900684,
   0.003877938,
   0.003665752,
   0.004042354,
   0.003857307,
   0.004033285,
   0.005523476,
   0.004097604,
   0.00585498,
   0.003993061,
   0.003750815,
   0.003784415,
   0.003927594,
   0.004000131,
   0.004592756,
   0.004589723,
   0.04170615,
   0.005451464,
   0.003853935,
   0.003714992,
   0.003766972,
   0.003909315};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#Delta#LTy_{calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,24570,24642);
   Graph_Graph1002->SetMinimum(0.5147124);
   Graph_Graph1002->SetMaximum(0.718654);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Run number");
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
