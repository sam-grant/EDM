void dBr_vs_N_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:33:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1195850,0.1340888,1.486271e+07,1.631753);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1132[13] = {
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
   Double_t Fits_fy1132[13] = {
   1.379523,
   0.9748765,
   0.7985805,
   0.6942673,
   0.6215311,
   0.5653571,
   0.5232692,
   0.4897627,
   0.461958,
   0.4371722,
   0.4172945,
   0.3998759,
   0.3839065};
   Double_t Fits_fex1132[13] = {
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
   Double_t Fits_fey1132[13] = {
   0.002619085,
   0.00133632,
   0.0008751913,
   0.0006847359,
   0.0005304042,
   0.0004597602,
   0.000394157,
   0.0003385967,
   0.0002982266,
   0.0002583972,
   0.0002434512,
   0.0002243629,
   0.0002070887};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1132,Fits_fy1132,Fits_fex1132,Fits_fey1132);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1132 = new TH1F("Graph_Fits1132","",100,0,1.366686e+07);
   Graph_Fits1132->SetMinimum(0.2838552);
   Graph_Fits1132->SetMaximum(1.481986);
   Graph_Fits1132->SetDirectory(0);
   Graph_Fits1132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1132->SetLineColor(ci);
   Graph_Fits1132->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1132->GetXaxis()->SetRange(4,97);
   Graph_Fits1132->GetXaxis()->CenterTitle(true);
   Graph_Fits1132->GetXaxis()->SetLabelFont(42);
   Graph_Fits1132->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1132->GetXaxis()->SetTitleFont(42);
   Graph_Fits1132->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1132->GetYaxis()->CenterTitle(true);
   Graph_Fits1132->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1132->GetYaxis()->SetLabelFont(42);
   Graph_Fits1132->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1132->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1132->GetYaxis()->SetTitleFont(42);
   Graph_Fits1132->GetZaxis()->SetLabelFont(42);
   Graph_Fits1132->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1132);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1133[13] = {
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
   Double_t Truth_fy1133[13] = {
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
   Double_t Truth_fex1133[13] = {
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
   Double_t Truth_fey1133[13] = {
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
   gre = new TGraphErrors(13,Truth_fx1133,Truth_fy1133,Truth_fex1133,Truth_fey1133);
   gre->SetName("Truth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1133 = new TH1F("Graph_Truth1133","Graph",100,0,1.366686e+07);
   Graph_Truth1133->SetMinimum(0.2859249);
   Graph_Truth1133->SetMaximum(1.598276);
   Graph_Truth1133->SetDirectory(0);
   Graph_Truth1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1133->SetLineColor(ci);
   Graph_Truth1133->GetXaxis()->SetLabelFont(42);
   Graph_Truth1133->GetXaxis()->SetTitleOffset(1);
   Graph_Truth1133->GetXaxis()->SetTitleFont(42);
   Graph_Truth1133->GetYaxis()->SetLabelFont(42);
   Graph_Truth1133->GetYaxis()->SetTitleFont(42);
   Graph_Truth1133->GetZaxis()->SetLabelFont(42);
   Graph_Truth1133->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1133);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.69,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fits","Fits","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Truth","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(410005.7,1.481986,1.325685e+07,1.481986,14,345,510,"-");
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
