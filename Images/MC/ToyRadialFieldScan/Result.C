void Result()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:10:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1287431,45,0.1787431);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1009[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.008745414,
   0.008745414,
   0.008745414,
   0.008745414};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,-36,36);
   Graph_Graph01009->SetMinimum(-0.0979945);
   Graph_Graph01009->SetMaximum(0.1479945);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   
   TF1 *lineFit21010 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21010->SetFillColor(19);
   lineFit21010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21010->SetLineColor(ci);
   lineFit21010->SetLineWidth(2);
   lineFit21010->SetChisquare(1.766091e-25);
   lineFit21010->SetNDF(2);
   lineFit21010->GetXaxis()->SetLabelFont(42);
   lineFit21010->GetXaxis()->SetTitleOffset(1);
   lineFit21010->GetXaxis()->SetTitleFont(42);
   lineFit21010->GetYaxis()->SetLabelFont(42);
   lineFit21010->GetYaxis()->SetTitleFont(42);
   lineFit21010->SetParameter(0,0.025);
   lineFit21010->SetParError(0,0.004372707);
   lineFit21010->SetParLimits(0,0,0);
   lineFit21010->SetParameter(1,-0.003125);
   lineFit21010->SetParError(1,0.0001955534);
   lineFit21010->SetParLimits(1,0,0);
   lineFit21010->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21010);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.69,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("8.83#times10^{#minus26}");
   pt_LaTex = pt->AddText("    8#pm 1.49");
   pt->Draw();
   
   pt = new TPaveText(0.5,0.69,0.69,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,-0.0979945,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21011 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21011->SetFillColor(19);
   lineFit21011->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21011->SetLineColor(ci);
   lineFit21011->SetLineWidth(2);
   lineFit21011->SetChisquare(1.766091e-25);
   lineFit21011->SetNDF(2);
   lineFit21011->GetXaxis()->SetLabelFont(42);
   lineFit21011->GetXaxis()->SetTitleOffset(1);
   lineFit21011->GetXaxis()->SetTitleFont(42);
   lineFit21011->GetYaxis()->SetLabelFont(42);
   lineFit21011->GetYaxis()->SetTitleFont(42);
   lineFit21011->SetParameter(0,0.025);
   lineFit21011->SetParError(0,0.004372707);
   lineFit21011->SetParLimits(0,0,0);
   lineFit21011->SetParameter(1,-0.003125);
   lineFit21011->SetParError(1,0.0001955534);
   lineFit21011->SetParLimits(1,0,0);
   lineFit21011->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
