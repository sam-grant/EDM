void Br_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,6.264333,1.502589e+07,9.775114);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1157[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Graph0_fy1157[13] = {
   8.019723,
   8.012809,
   7.98884,
   7.999017,
   7.996401,
   7.994104,
   8.008705,
   8.004634,
   8.01153,
   8.007085,
   7.999327,
   8.000351,
   7.99179};
   Double_t Graph0_fex1157[13] = {
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
   Double_t Graph0_fey1157[13] = {
   1.170261,
   0.822558,
   0.6698278,
   0.582033,
   0.5192,
   0.4734244,
   0.4386862,
   0.4093963,
   0.3859974,
   0.3659528,
   0.3484768,
   0.3338671,
   0.3203998};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1157,Graph0_fy1157,Graph0_fex1157,Graph0_fey1157);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;#LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01157 = new TH1F("Graph_Graph01157","",100,0,1.362893e+07);
   Graph_Graph01157->SetMinimum(6.615411);
   Graph_Graph01157->SetMaximum(9.424036);
   Graph_Graph01157->SetDirectory(0);
   Graph_Graph01157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01157->SetLineColor(ci);
   Graph_Graph01157->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Graph01157->GetXaxis()->SetRange(1,98);
   Graph_Graph01157->GetXaxis()->CenterTitle(true);
   Graph_Graph01157->GetXaxis()->SetLabelFont(42);
   Graph_Graph01157->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01157->GetXaxis()->SetTitleFont(42);
   Graph_Graph01157->GetYaxis()->SetTitle("#LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Graph01157->GetYaxis()->CenterTitle(true);
   Graph_Graph01157->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01157->GetYaxis()->SetLabelFont(42);
   Graph_Graph01157->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01157->GetYaxis()->SetTitleFont(42);
   Graph_Graph01157->GetZaxis()->SetLabelFont(42);
   Graph_Graph01157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01157);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,9.424036,1.335635e+07,9.424036,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

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
