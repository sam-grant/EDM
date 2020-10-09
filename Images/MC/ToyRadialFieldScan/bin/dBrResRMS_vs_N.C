void dBrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1708357,0.1059911,1.537521e+07,1.747717);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1135[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Truth_fy1135[13] = {
   1.441855,
   1.02735,
   0.8608604,
   0.7257481,
   0.6837001,
   0.6017435,
   0.5623803,
   0.5165035,
   0.4984498,
   0.466233,
   0.4475616,
   0.4283069,
   0.3882947};
   Double_t Truth_fex1135[13] = {
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
   Double_t Truth_fey1135[13] = {
   0.03224087,
   0.02297224,
   0.01924942,
   0.01622822,
   0.015288,
   0.01345539,
   0.01257521,
   0.01154937,
   0.01114568,
   0.01042529,
   0.01000778,
   0.009577234,
   0.008682533};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1135,Truth_fy1135,Truth_fex1135,Truth_fey1135);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Truth11331135 = new TH1F("Graph_Graph_Truth11331135","",100,0,1.366686e+07);
   Graph_Graph_Truth11331135->SetMinimum(0.2701638);
   Graph_Graph_Truth11331135->SetMaximum(1.583545);
   Graph_Graph_Truth11331135->SetDirectory(0);
   Graph_Graph_Truth11331135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Truth11331135->SetLineColor(ci);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph_Truth11331135->GetXaxis()->CenterTitle(true);
   Graph_Graph_Truth11331135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Graph_Truth11331135->GetYaxis()->CenterTitle(true);
   Graph_Graph_Truth11331135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Truth11331135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Truth11331135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Truth11331135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Truth11331135);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.583545,1.366686e+07,1.583545,14,345,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
