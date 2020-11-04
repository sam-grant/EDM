void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:17:05 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2011692,45,0.1404309);
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
   0.08035511,
   0.0040692,
   -0.06032509,
   -0.1410934};
   Double_t Graph0_fex1129[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1129[4] = {
   0.003142438,
   0.003142443,
   0.003142358,
   0.003142435};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","Sub-runs 275",100,-36,36);
   Graph_Graph01129->SetMinimum(-0.1670092);
   Graph_Graph01129->SetMaximum(0.1062709);
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
   
   
   TF1 *mainFit1130 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1130->SetFillColor(19);
   mainFit1130->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1130->SetLineColor(ci);
   mainFit1130->SetLineWidth(2);
   mainFit1130->SetChisquare(4.554142);
   mainFit1130->SetNDF(2);
   mainFit1130->GetXaxis()->SetLabelFont(42);
   mainFit1130->GetXaxis()->SetTitleOffset(1);
   mainFit1130->GetXaxis()->SetTitleFont(42);
   mainFit1130->GetYaxis()->SetLabelFont(42);
   mainFit1130->GetYaxis()->SetTitleFont(42);
   mainFit1130->SetParameter(0,-0.029249);
   mainFit1130->SetParError(0,0.001571209);
   mainFit1130->SetParLimits(0,0,0);
   mainFit1130->SetParameter(1,-0.003643706);
   mainFit1130->SetParError(1,7.026694e-05);
   mainFit1130->SetParLimits(1,0,0);
   mainFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1130);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.28");
   pt_LaTex = pt->AddText("#minus0.00364#pm7.03e-05");
   pt_LaTex = pt->AddText("#minus0.0292#pm0.00157");
   pt_LaTex = pt->AddText("#minus8.03#pm0.458");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.027267,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.027267,-0.1670092,-8.027267,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1131 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1131->SetFillColor(19);
   mainFit1131->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1131->SetLineColor(ci);
   mainFit1131->SetLineWidth(2);
   mainFit1131->SetChisquare(4.554142);
   mainFit1131->SetNDF(2);
   mainFit1131->GetXaxis()->SetLabelFont(42);
   mainFit1131->GetXaxis()->SetTitleOffset(1);
   mainFit1131->GetXaxis()->SetTitleFont(42);
   mainFit1131->GetYaxis()->SetLabelFont(42);
   mainFit1131->GetYaxis()->SetTitleFont(42);
   mainFit1131->SetParameter(0,-0.029249);
   mainFit1131->SetParError(0,0.001571209);
   mainFit1131->SetParLimits(0,0,0);
   mainFit1131->SetParameter(1,-0.003643706);
   mainFit1131->SetParError(1,7.026694e-05);
   mainFit1131->SetParLimits(1,0,0);
   mainFit1131->Draw("same");
   
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
