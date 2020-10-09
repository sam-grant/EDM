void Result_NSUBRUN_350_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 15:41:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.6459551,45,0.6959551);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1139[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1139[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1139[4] = {
   0.3535534,
   0.3535534,
   0.3535534,
   0.3535534};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 350");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","Sub-runs 350",100,-36,36);
   Graph_Graph01139->SetMinimum(-0.5117641);
   Graph_Graph01139->SetMaximum(0.5617641);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
   
   TF1 *fieldLineFit1140 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1140->SetFillColor(19);
   fieldLineFit1140->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1140->SetLineColor(ci);
   fieldLineFit1140->SetLineWidth(2);
   fieldLineFit1140->SetChisquare(9.556277e-25);
   fieldLineFit1140->SetNDF(2);
   fieldLineFit1140->GetXaxis()->SetLabelFont(42);
   fieldLineFit1140->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1140->GetXaxis()->SetTitleFont(42);
   fieldLineFit1140->GetYaxis()->SetLabelFont(42);
   fieldLineFit1140->GetYaxis()->SetTitleFont(42);
   fieldLineFit1140->SetParameter(0,0.025);
   fieldLineFit1140->SetParError(0,0.1767767);
   fieldLineFit1140->SetParLimits(0,0,0);
   fieldLineFit1140->SetParameter(1,-0.003125);
   fieldLineFit1140->SetParError(1,0.007905694);
   fieldLineFit1140->SetParLimits(1,0,0);
   fieldLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1140);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.61#times10^{#minus21}");
   pt_LaTex = pt->AddText("#minus0.00312#pm0.00791");
   pt_LaTex = pt->AddText("0.025#pm0.177");
   pt_LaTex = pt->AddText("    8#pm 56.6");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,-0.5117641,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1141 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1141->SetFillColor(19);
   fieldLineFit1141->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1141->SetLineColor(ci);
   fieldLineFit1141->SetLineWidth(2);
   fieldLineFit1141->SetChisquare(9.556277e-25);
   fieldLineFit1141->SetNDF(2);
   fieldLineFit1141->GetXaxis()->SetLabelFont(42);
   fieldLineFit1141->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1141->GetXaxis()->SetTitleFont(42);
   fieldLineFit1141->GetYaxis()->SetLabelFont(42);
   fieldLineFit1141->GetYaxis()->SetTitleFont(42);
   fieldLineFit1141->SetParameter(0,0.025);
   fieldLineFit1141->SetParError(0,0.1767767);
   fieldLineFit1141->SetParLimits(0,0,0);
   fieldLineFit1141->SetParameter(1,-0.003125);
   fieldLineFit1141->SetParError(1,0.007905694);
   fieldLineFit1141->SetParLimits(1,0,0);
   fieldLineFit1141->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 350");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
