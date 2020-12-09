void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-45.89154,45,66.05318);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[2] = {
   -30,
   30};
   Double_t Graph0_fy1085[2] = {
   -26.44076,
   46.6024};
   Double_t Graph0_fex1085[2] = {
   0,
   0};
   Double_t Graph0_fey1085[2] = {
   0.793323,
   0.793323};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","275 sub-runs",100,-36,36);
   Graph_Graph01085->SetMinimum(-34.69707);
   Graph_Graph01085->SetMaximum(54.85871);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
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
   
   
   TF1 *mainFit1086 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1086->SetFillColor(19);
   mainFit1086->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1086->SetLineColor(ci);
   mainFit1086->SetLineWidth(2);
   mainFit1086->SetChisquare(3.408616e-11);
   mainFit1086->SetNDF(0);
   mainFit1086->GetXaxis()->SetLabelFont(42);
   mainFit1086->GetXaxis()->SetTitleOffset(1);
   mainFit1086->GetXaxis()->SetTitleFont(42);
   mainFit1086->GetYaxis()->SetLabelFont(42);
   mainFit1086->GetYaxis()->SetTitleFont(42);
   mainFit1086->SetParameter(0,10.08082);
   mainFit1086->SetParError(0,0.5609641);
   mainFit1086->SetParLimits(0,0,0);
   mainFit1086->SetParameter(1,1.217386);
   mainFit1086->SetParError(1,0.0186988);
   mainFit1086->SetParLimits(1,0,0);
   mainFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1086);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText(" 1.22#pm0.0187");
   pt_LaTex = pt->AddText(" 10.1#pm0.561");
   pt_LaTex = pt->AddText(" 8.28#pm0.478");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.280707,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.280707,-34.69707,-8.280707,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1087 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1087->SetFillColor(19);
   mainFit1087->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1087->SetLineColor(ci);
   mainFit1087->SetLineWidth(2);
   mainFit1087->SetChisquare(3.408616e-11);
   mainFit1087->SetNDF(0);
   mainFit1087->GetXaxis()->SetLabelFont(42);
   mainFit1087->GetXaxis()->SetTitleOffset(1);
   mainFit1087->GetXaxis()->SetTitleFont(42);
   mainFit1087->GetYaxis()->SetLabelFont(42);
   mainFit1087->GetYaxis()->SetTitleFont(42);
   mainFit1087->SetParameter(0,10.08082);
   mainFit1087->SetParError(0,0.5609641);
   mainFit1087->SetParLimits(0,0,0);
   mainFit1087->SetParameter(1,1.217386);
   mainFit1087->SetParError(1,0.0186988);
   mainFit1087->SetParLimits(1,0,0);
   mainFit1087->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("275 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
