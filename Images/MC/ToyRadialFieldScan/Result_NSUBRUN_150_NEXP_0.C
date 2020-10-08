void Result_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1478596,45,0.1487529);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1059[4] = {
   0.09505791,
   0.03330461,
   -0.02925135,
   -0.09416463};
   Double_t Graph0_fex1059[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1059[4] = {
   0.004259539,
   0.004259539,
   0.004259539,
   0.004259539};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","Sub-runs 150",100,-36,36);
   Graph_Graph01059->SetMinimum(-0.1181983);
   Graph_Graph01059->SetMaximum(0.1190916);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   
   TF1 *fieldLineFit1060 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1060->SetFillColor(19);
   fieldLineFit1060->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1060->SetLineColor(ci);
   fieldLineFit1060->SetLineWidth(2);
   fieldLineFit1060->SetChisquare(0.1442489);
   fieldLineFit1060->SetNDF(2);
   fieldLineFit1060->GetXaxis()->SetLabelFont(42);
   fieldLineFit1060->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1060->GetXaxis()->SetTitleFont(42);
   fieldLineFit1060->GetYaxis()->SetLabelFont(42);
   fieldLineFit1060->GetYaxis()->SetTitleFont(42);
   fieldLineFit1060->SetParameter(0,0.001236636);
   fieldLineFit1060->SetParError(0,0.00212977);
   fieldLineFit1060->SetParLimits(0,0,0);
   fieldLineFit1060->SetParameter(1,-0.003151118);
   fieldLineFit1060->SetParError(1,9.524619e-05);
   fieldLineFit1060->SetParLimits(1,0,0);
   fieldLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1060);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0721}");
   pt_LaTex = pt->AddText("#minus0.00315#pm9.52e-05");
   pt_LaTex = pt->AddText("0.00124#pm0.00213");
   pt_LaTex = pt->AddText("0.392#pm0.676");
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
   TLine *line = new TLine(-36,0,0.3924436,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.3924436,-0.1181983,0.3924436,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1061 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1061->SetFillColor(19);
   fieldLineFit1061->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1061->SetLineColor(ci);
   fieldLineFit1061->SetLineWidth(2);
   fieldLineFit1061->SetChisquare(0.1442489);
   fieldLineFit1061->SetNDF(2);
   fieldLineFit1061->GetXaxis()->SetLabelFont(42);
   fieldLineFit1061->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1061->GetXaxis()->SetTitleFont(42);
   fieldLineFit1061->GetYaxis()->SetLabelFont(42);
   fieldLineFit1061->GetYaxis()->SetTitleFont(42);
   fieldLineFit1061->SetParameter(0,0.001236636);
   fieldLineFit1061->SetParError(0,0.00212977);
   fieldLineFit1061->SetParLimits(0,0,0);
   fieldLineFit1061->SetParameter(1,-0.003151118);
   fieldLineFit1061->SetParError(1,9.524619e-05);
   fieldLineFit1061->SetParLimits(1,0,0);
   fieldLineFit1061->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 150");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
