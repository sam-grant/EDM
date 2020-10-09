void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:33:05 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2019043,45,0.14001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1109[4] = {
   0.07988187,
   -0.0002236526,
   -0.06547378,
   -0.1417762};
   Double_t Graph0_fex1109[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1109[4] = {
   0.003142438,
   0.003142438,
   0.003142438,
   0.003142438};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","Sub-runs 275",100,-36,36);
   Graph_Graph01109->SetMinimum(-0.1677129);
   Graph_Graph01109->SetMaximum(0.1058186);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
   
   TF1 *fieldLineFit1110 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1110->SetFillColor(19);
   fieldLineFit1110->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1110->SetLineColor(ci);
   fieldLineFit1110->SetLineWidth(2);
   fieldLineFit1110->SetChisquare(3.764718);
   fieldLineFit1110->SetNDF(2);
   fieldLineFit1110->GetXaxis()->SetLabelFont(42);
   fieldLineFit1110->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1110->GetXaxis()->SetTitleFont(42);
   fieldLineFit1110->GetYaxis()->SetLabelFont(42);
   fieldLineFit1110->GetYaxis()->SetTitleFont(42);
   fieldLineFit1110->SetParameter(0,-0.03189793);
   fieldLineFit1110->SetParError(0,0.001571219);
   fieldLineFit1110->SetParLimits(0,0,0);
   fieldLineFit1110->SetParameter(1,-0.003651121);
   fieldLineFit1110->SetParError(1,7.026705e-05);
   fieldLineFit1110->SetParLimits(1,0,0);
   fieldLineFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1110);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.88");
   pt_LaTex = pt->AddText("#minus0.00365#pm7.03e-05");
   pt_LaTex = pt->AddText("-0.0319#pm0.00157");
   pt_LaTex = pt->AddText("-8.74#pm 0.43");
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
   TLine *line = new TLine(-36,0,-8.736476,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.736476,-0.1677129,-8.736476,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1111 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1111->SetFillColor(19);
   fieldLineFit1111->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1111->SetLineColor(ci);
   fieldLineFit1111->SetLineWidth(2);
   fieldLineFit1111->SetChisquare(3.764718);
   fieldLineFit1111->SetNDF(2);
   fieldLineFit1111->GetXaxis()->SetLabelFont(42);
   fieldLineFit1111->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1111->GetXaxis()->SetTitleFont(42);
   fieldLineFit1111->GetYaxis()->SetLabelFont(42);
   fieldLineFit1111->GetYaxis()->SetTitleFont(42);
   fieldLineFit1111->SetParameter(0,-0.03189793);
   fieldLineFit1111->SetParError(0,0.001571219);
   fieldLineFit1111->SetParLimits(0,0,0);
   fieldLineFit1111->SetParameter(1,-0.003651121);
   fieldLineFit1111->SetParError(1,7.026705e-05);
   fieldLineFit1111->SetParLimits(1,0,0);
   fieldLineFit1111->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 275");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
