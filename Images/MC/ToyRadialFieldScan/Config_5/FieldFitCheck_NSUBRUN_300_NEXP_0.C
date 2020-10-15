void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-73.03199,75,87.12168);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1311[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1311[11] = {
   -45.06855,
   -33.69638,
   -20.71851,
   -10.95486,
   -3.248126,
   8.172399,
   17.06681,
   27.00825,
   36.9386,
   48.43054,
   59.15824};
   Double_t Graph0_fex1311[11] = {
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
   Double_t Graph0_fey1311[11] = {
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159,
   1.271159};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1311,Graph0_fy1311,Graph0_fex1311,Graph0_fey1311);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01311 = new TH1F("Graph_Graph01311","Sub-runs 300",100,-60,60);
   Graph_Graph01311->SetMinimum(-57.01662);
   Graph_Graph01311->SetMaximum(71.10631);
   Graph_Graph01311->SetDirectory(0);
   Graph_Graph01311->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01311->SetLineColor(ci);
   Graph_Graph01311->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01311->GetXaxis()->CenterTitle(true);
   Graph_Graph01311->GetXaxis()->SetLabelFont(42);
   Graph_Graph01311->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01311->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01311->GetXaxis()->SetTitleFont(42);
   Graph_Graph01311->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01311->GetYaxis()->CenterTitle(true);
   Graph_Graph01311->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01311->GetYaxis()->SetLabelFont(42);
   Graph_Graph01311->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01311->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01311->GetYaxis()->SetTitleFont(42);
   Graph_Graph01311->GetZaxis()->SetLabelFont(42);
   Graph_Graph01311->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01311->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01311);
   
   
   TF1 *checkFit1312 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1312->SetFillColor(19);
   checkFit1312->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1312->SetLineColor(ci);
   checkFit1312->SetLineWidth(2);
   checkFit1312->SetChisquare(9.715636);
   checkFit1312->SetNDF(9);
   checkFit1312->GetXaxis()->SetLabelFont(42);
   checkFit1312->GetXaxis()->SetTitleOffset(1);
   checkFit1312->GetXaxis()->SetTitleFont(42);
   checkFit1312->GetYaxis()->SetLabelFont(42);
   checkFit1312->GetYaxis()->SetTitleFont(42);
   checkFit1312->SetParameter(0,7.553492);
   checkFit1312->SetParError(0,0.3832688);
   checkFit1312->SetParLimits(0,0,0);
   checkFit1312->SetParameter(1,1.01714);
   checkFit1312->SetParError(1,0.01212002);
   checkFit1312->SetParLimits(1,0,0);
   checkFit1312->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1312);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.08");
   pt_LaTex = pt->AddText(" 1.02#pm0.0121");
   pt_LaTex = pt->AddText(" 7.55#pm0.383");
   pt_LaTex = pt->AddText("#minus7.43#pm0.387");
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
   TLine *line = new TLine(-60,0,-7.426206,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.426206,-57.01662,-7.426206,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1313 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1313->SetFillColor(19);
   checkFit1313->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1313->SetLineColor(ci);
   checkFit1313->SetLineWidth(2);
   checkFit1313->SetChisquare(9.715636);
   checkFit1313->SetNDF(9);
   checkFit1313->GetXaxis()->SetLabelFont(42);
   checkFit1313->GetXaxis()->SetTitleOffset(1);
   checkFit1313->GetXaxis()->SetTitleFont(42);
   checkFit1313->GetYaxis()->SetLabelFont(42);
   checkFit1313->GetYaxis()->SetTitleFont(42);
   checkFit1313->SetParameter(0,7.553492);
   checkFit1313->SetParError(0,0.3832688);
   checkFit1313->SetParLimits(0,0,0);
   checkFit1313->SetParameter(1,1.01714);
   checkFit1313->SetParError(1,0.01212002);
   checkFit1313->SetParLimits(1,0,0);
   checkFit1313->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 300");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
