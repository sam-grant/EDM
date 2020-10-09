void dBrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:33:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1708357,0.121881,1.537521e+07,1.762319);
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
   1.456348,
   1.035781,
   0.8466198,
   0.7339232,
   0.6697203,
   0.6145993,
   0.5557322,
   0.5173576,
   0.4861609,
   0.4523336,
   0.4439485,
   0.4322913,
   0.4043285};
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
   0.03256493,
   0.02316076,
   0.01893099,
   0.01641102,
   0.0149754,
   0.01374286,
   0.01242655,
   0.01156847,
   0.01087089,
   0.01011449,
   0.00992699,
   0.009666327,
   0.00904106};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1135,Truth_fy1135,Truth_fex1135,Truth_fey1135);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Truth11331135 = new TH1F("Graph_Graph_Truth11331135","",100,0,1.366686e+07);
   Graph_Graph_Truth11331135->SetMinimum(0.2859249);
   Graph_Graph_Truth11331135->SetMaximum(1.598276);
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
   TGaxis *gaxis = new TGaxis(0,1.598276,1.366686e+07,1.598276,14,345,510,"-");
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
