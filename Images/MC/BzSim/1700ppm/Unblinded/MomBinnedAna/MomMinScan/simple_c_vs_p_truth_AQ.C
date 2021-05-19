void simple_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 14 14:19:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-535,-0.04552006,3335,0.06697155);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1085[15] = {
   -0.02463445,
   -0.02354278,
   -0.01707414,
   -0.008430899,
   0.001427949,
   0.007580992,
   0.01453737,
   0.02148058,
   0.02811473,
   0.0339512,
   0.03713613,
   0.04259317,
   0.04498117,
   0.04478488,
   0.03423375};
   Double_t Graph0_fex1085[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1085[15] = {
   0.002137011,
   0.00212599,
   0.002098885,
   0.002052562,
   0.001990085,
   0.001951183,
   0.001942134,
   0.001961844,
   0.002015852,
   0.002112559,
   0.002260167,
   0.002484279,
   0.002832161,
   0.003438067,
   0.004703641};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","",100,-400,3200);
   Graph_Graph01085->SetMinimum(-0.0342709);
   Graph_Graph01085->SetMaximum(0.05572239);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01085->GetXaxis()->SetRange(8,93);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
