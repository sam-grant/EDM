void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:16:10 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.04555538,3330.25,0.06702639);
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
   -0.02465463,
   -0.02356826,
   -0.01710748,
   -0.008445049,
   0.001419498,
   0.007596293,
   0.01455877,
   0.02152992,
   0.02818014,
   0.03403194,
   0.03719849,
   0.04265212,
   0.04507727,
   0.04482453,
   0.03431518};
   Double_t Graph0_fex1085[15] = {
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
   Double_t Graph0_fey1085[15] = {
   0.002137121,
   0.0021261,
   0.002098993,
   0.002052667,
   0.001990193,
   0.001951292,
   0.00194224,
   0.001961954,
   0.002015962,
   0.002112672,
   0.002260294,
   0.002484419,
   0.002832313,
   0.003438229,
   0.004703874};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","",100,0,3080);
   Graph_Graph01085->SetMinimum(-0.0342972);
   Graph_Graph01085->SetMaximum(0.05576821);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01085->GetXaxis()->SetRange(0,96);
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
