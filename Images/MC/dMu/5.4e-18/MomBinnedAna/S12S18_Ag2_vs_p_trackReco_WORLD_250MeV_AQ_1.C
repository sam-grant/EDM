void S12S18_Ag2_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6759,-0.5390466,2724.308,2.026324);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[12] = {
   175.3402,
   432.3653,
   628.4642,
   873.0148,
   1121.682,
   1371.448,
   1620.11,
   1868.09,
   2116.093,
   2363.253,
   2614.451,
   2826.106};
   Double_t Graph0_fy1057[12] = {
   0.8710619,
   -0.06175038,
   0.004703687,
   -0.04784021,
   -0.02307805,
   0.002785141,
   -0.003151455,
   -0.01042383,
   -0.003431686,
   -0.004409201,
   0.02270307,
   -0.04491688};
   Double_t Graph0_fex1057[12] = {
   0.5249826,
   0.04983601,
   0.0448855,
   0.04517505,
   0.04844682,
   0.05242811,
   0.05778019,
   0.06630119,
   0.07960463,
   0.1021572,
   0.1325112,
   0.1619192};
   Double_t Graph0_fey1057[12] = {
   0.7277006,
   0.04973439,
   0.02489426,
   0.02037622,
   0.01837627,
   0.01694787,
   0.01610049,
   0.01592542,
   0.01654994,
   0.01822355,
   0.0193818,
   0.02520471};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S12S18_",100,0,3091.413);
   Graph_Graph01057->SetMinimum(-0.2825095);
   Graph_Graph01057->SetMaximum(1.769787);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(25,81);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
