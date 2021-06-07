void BrVsRun_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 06:38:19 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(24561,-5.649917,24651,18.33749);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[29] = {
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
   Double_t Graph0_fy1003[29] = {
   7.341663,
   6.812469,
   6.61066,
   6.337844,
   6.275089,
   6.280274,
   6.060779,
   5.823496,
   5.886263,
   5.803236,
   5.861016,
   5.767783,
   5.467767,
   5.481261,
   5.377507,
   5.097709,
   5.154824,
   5.153779,
   5.264753,
   5.37858,
   6.055193,
   5.865215,
   6.138281,
   7.538251,
   6.5576,
   7.13706,
   7.280225,
   7.458324,
   7.546166};
   Double_t Graph0_fex1003[29] = {
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
   Double_t Graph0_fey1003[29] = {
   6.754009,
   6.750329,
   6.750128,
   6.750491,
   6.7499,
   6.749921,
   6.749718,
   6.749604,
   6.749638,
   6.749539,
   6.749661,
   6.749559,
   6.749415,
   6.749843,
   6.749376,
   6.749724,
   6.749218,
   6.749162,
   6.749236,
   6.749337,
   6.749774,
   6.749803,
   6.749976,
   6.801341,
   6.750505,
   6.750459,
   6.750528,
   6.750665,
   6.750759};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,24570,24642);
   Graph_Graph1003->SetMinimum(-3.251176);
   Graph_Graph1003->SetMaximum(15.93875);
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
