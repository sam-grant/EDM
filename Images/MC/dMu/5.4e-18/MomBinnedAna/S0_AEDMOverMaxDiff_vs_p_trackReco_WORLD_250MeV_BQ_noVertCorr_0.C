void S0_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 24 20:44:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6275,-0.00270515,3377.862,0.004194983);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[11] = {
   451.6469,
   653.2585,
   879.9235,
   1123.046,
   1371.407,
   1620.72,
   1868.002,
   2116.574,
   2363.173,
   2615.303,
   2789.539};
   Double_t Graph0_fy1070[11] = {
   0.0009965351,
   0.001206641,
   0.001542323,
   0.001605236,
   0.002667659,
   0.0021783,
   0.002150318,
   0.002600485,
   0.001808368,
   0.001997721,
   -0.001555128};
   Double_t Graph0_fex1070[11] = {
   0.1383888,
   0.1171073,
   0.08542908,
   0.08352372,
   0.08892402,
   0.0981727,
   0.1127012,
   0.136412,
   0.1707298,
   0.2138176,
   0.2465359};
   Double_t Graph0_fey1070[11] = {
   0.001041759,
   0.000397915,
   0.0002812611,
   0.000254443,
   0.0002963043,
   0.0002557242,
   0.0003676636,
   0.0004444754,
   0.0004746776,
   0.0007570508,
   -0.002217519};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0_",100,217.6808,3023.613);
   Graph_Graph01070->SetMinimum(-0.002015137);
   Graph_Graph01070->SetMaximum(0.003504969);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(0,100);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
