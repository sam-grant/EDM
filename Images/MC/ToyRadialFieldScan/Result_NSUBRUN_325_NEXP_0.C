void Result_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1440567,45,0.1459954);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1129[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1129[4] = {
   0.09476314,
   0.03173798,
   -0.02842324,
   -0.09282441};
   Double_t Graph0_fex1129[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1129[4] = {
   0.002890265,
   0.002890265,
   0.002890265,
   0.002890265};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","Sub-runs 325",100,-36,36);
   Graph_Graph01129->SetMinimum(-0.1150515);
   Graph_Graph01129->SetMaximum(0.1169902);
   Graph_Graph01129->SetDirectory(0);
   Graph_Graph01129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01129->SetLineColor(ci);
   Graph_Graph01129->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01129->GetXaxis()->CenterTitle(true);
   Graph_Graph01129->GetXaxis()->SetLabelFont(42);
   Graph_Graph01129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01129->GetXaxis()->SetTitleFont(42);
   Graph_Graph01129->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01129->GetYaxis()->CenterTitle(true);
   Graph_Graph01129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01129->GetYaxis()->SetLabelFont(42);
   Graph_Graph01129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01129->GetYaxis()->SetTitleFont(42);
   Graph_Graph01129->GetZaxis()->SetLabelFont(42);
   Graph_Graph01129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01129);
   
   
   TF1 *fieldLineFit1130 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1130->SetFillColor(19);
   fieldLineFit1130->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1130->SetLineColor(ci);
   fieldLineFit1130->SetLineWidth(2);
   fieldLineFit1130->SetChisquare(0.358719);
   fieldLineFit1130->SetNDF(2);
   fieldLineFit1130->GetXaxis()->SetLabelFont(42);
   fieldLineFit1130->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1130->GetXaxis()->SetTitleFont(42);
   fieldLineFit1130->GetYaxis()->SetLabelFont(42);
   fieldLineFit1130->GetYaxis()->SetTitleFont(42);
   fieldLineFit1130->SetParameter(0,0.001313369);
   fieldLineFit1130->SetParError(0,0.001445133);
   fieldLineFit1130->SetParLimits(0,0,0);
   fieldLineFit1130->SetParameter(1,-0.003114619);
   fieldLineFit1130->SetParError(1,6.462829e-05);
   fieldLineFit1130->SetParLimits(1,0,0);
   fieldLineFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1130);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.179");
   pt_LaTex = pt->AddText("#minus0.00311#pm6.46e-05");
   pt_LaTex = pt->AddText("0.00131#pm0.00145");
   pt_LaTex = pt->AddText("0.422#pm0.464");
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
   TLine *line = new TLine(-36,0,0.4216789,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.4216789,-0.1150515,0.4216789,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1131 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1131->SetFillColor(19);
   fieldLineFit1131->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1131->SetLineColor(ci);
   fieldLineFit1131->SetLineWidth(2);
   fieldLineFit1131->SetChisquare(0.358719);
   fieldLineFit1131->SetNDF(2);
   fieldLineFit1131->GetXaxis()->SetLabelFont(42);
   fieldLineFit1131->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1131->GetXaxis()->SetTitleFont(42);
   fieldLineFit1131->GetYaxis()->SetLabelFont(42);
   fieldLineFit1131->GetYaxis()->SetTitleFont(42);
   fieldLineFit1131->SetParameter(0,0.001313369);
   fieldLineFit1131->SetParError(0,0.001445133);
   fieldLineFit1131->SetParLimits(0,0,0);
   fieldLineFit1131->SetParameter(1,-0.003114619);
   fieldLineFit1131->SetParError(1,6.462829e-05);
   fieldLineFit1131->SetParLimits(1,0,0);
   fieldLineFit1131->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
