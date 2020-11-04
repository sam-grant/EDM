void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.53918,75,85.46599);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1167[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1167[5] = {
   -42.07284,
   -16.7546,
   8.297014,
   32.18147,
   58.99964};
   Double_t Graph0_fex1167[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1167[5] = {
   0.7988157,
   0.7988157,
   0.7988157,
   0.7988157,
   0.7988157};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1167,Graph0_fy1167,Graph0_fex1167,Graph0_fey1167);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01167 = new TH1F("Graph_Graph01167","Sub-runs 300",100,-60,60);
   Graph_Graph01167->SetMinimum(-53.13867);
   Graph_Graph01167->SetMaximum(70.06547);
   Graph_Graph01167->SetDirectory(0);
   Graph_Graph01167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01167->SetLineColor(ci);
   Graph_Graph01167->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01167->GetXaxis()->CenterTitle(true);
   Graph_Graph01167->GetXaxis()->SetLabelFont(42);
   Graph_Graph01167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01167->GetXaxis()->SetTitleFont(42);
   Graph_Graph01167->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01167->GetYaxis()->CenterTitle(true);
   Graph_Graph01167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01167->GetYaxis()->SetLabelFont(42);
   Graph_Graph01167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01167->GetYaxis()->SetTitleFont(42);
   Graph_Graph01167->GetZaxis()->SetLabelFont(42);
   Graph_Graph01167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01167);
   
   
   TF1 *checkFit1168 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1168->SetFillColor(19);
   checkFit1168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1168->SetLineColor(ci);
   checkFit1168->SetLineWidth(2);
   checkFit1168->SetChisquare(2.54106);
   checkFit1168->SetNDF(3);
   checkFit1168->GetXaxis()->SetLabelFont(42);
   checkFit1168->GetXaxis()->SetTitleOffset(1);
   checkFit1168->GetXaxis()->SetTitleFont(42);
   checkFit1168->GetYaxis()->SetLabelFont(42);
   checkFit1168->GetYaxis()->SetTitleFont(42);
   checkFit1168->SetParameter(0,8.130138);
   checkFit1168->SetParError(0,0.3572413);
   checkFit1168->SetParLimits(0,0,0);
   checkFit1168->SetParameter(1,1.004324);
   checkFit1168->SetParError(1,0.01010431);
   checkFit1168->SetParLimits(1,0,0);
   checkFit1168->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1168);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.847");
   pt_LaTex = pt->AddText("    1#pm0.0101");
   pt_LaTex = pt->AddText(" 8.13#pm0.357");
   pt_LaTex = pt->AddText(" #minus8.1#pm0.365");
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
   TLine *line = new TLine(-60,0,-8.095134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.095134,-53.13867,-8.095134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1169 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1169->SetFillColor(19);
   checkFit1169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1169->SetLineColor(ci);
   checkFit1169->SetLineWidth(2);
   checkFit1169->SetChisquare(2.54106);
   checkFit1169->SetNDF(3);
   checkFit1169->GetXaxis()->SetLabelFont(42);
   checkFit1169->GetXaxis()->SetTitleOffset(1);
   checkFit1169->GetXaxis()->SetTitleFont(42);
   checkFit1169->GetYaxis()->SetLabelFont(42);
   checkFit1169->GetYaxis()->SetTitleFont(42);
   checkFit1169->SetParameter(0,8.130138);
   checkFit1169->SetParError(0,0.3572413);
   checkFit1169->SetParLimits(0,0,0);
   checkFit1169->SetParameter(1,1.004324);
   checkFit1169->SetParError(1,0.01010431);
   checkFit1169->SetParLimits(1,0,0);
   checkFit1169->Draw("same");
   
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
