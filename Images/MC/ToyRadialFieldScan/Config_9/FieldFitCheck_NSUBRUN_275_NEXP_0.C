void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-40.70993,45,56.55414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1109[3] = {
   -23.66481,
   39.50901,
   8.269442};
   Double_t Graph0_fex1109[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1109[3] = {
   0.8344447,
   0.8344447,
   0.8344447};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","Sub-runs 275",100,-36,36);
   Graph_Graph01109->SetMinimum(-30.98353);
   Graph_Graph01109->SetMaximum(46.82773);
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
   Graph_Graph01109->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
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
   
   
   TF1 *checkFit1110 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1110->SetFillColor(19);
   checkFit1110->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1110->SetLineColor(ci);
   checkFit1110->SetLineWidth(2);
   checkFit1110->SetChisquare(0.1155104);
   checkFit1110->SetNDF(1);
   checkFit1110->GetXaxis()->SetLabelFont(42);
   checkFit1110->GetXaxis()->SetTitleOffset(1);
   checkFit1110->GetXaxis()->SetTitleFont(42);
   checkFit1110->GetYaxis()->SetLabelFont(42);
   checkFit1110->GetYaxis()->SetTitleFont(42);
   checkFit1110->SetParameter(0,8.037882);
   checkFit1110->SetParError(0,0.4817669);
   checkFit1110->SetParLimits(0,0,0);
   checkFit1110->SetParameter(1,1.052897);
   checkFit1110->SetParError(1,0.01966805);
   checkFit1110->SetParLimits(1,0,0);
   checkFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1110);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.116");
   pt_LaTex = pt->AddText(" 1.05#pm0.0197");
   pt_LaTex = pt->AddText(" 8.04#pm0.482");
   pt_LaTex = pt->AddText("#minus7.63#pm0.479");
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
   TLine *line = new TLine(-36,0,-7.634063,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.634063,-30.98353,-7.634063,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1111 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1111->SetFillColor(19);
   checkFit1111->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1111->SetLineColor(ci);
   checkFit1111->SetLineWidth(2);
   checkFit1111->SetChisquare(0.1155104);
   checkFit1111->SetNDF(1);
   checkFit1111->GetXaxis()->SetLabelFont(42);
   checkFit1111->GetXaxis()->SetTitleOffset(1);
   checkFit1111->GetXaxis()->SetTitleFont(42);
   checkFit1111->GetYaxis()->SetLabelFont(42);
   checkFit1111->GetYaxis()->SetTitleFont(42);
   checkFit1111->SetParameter(0,8.037882);
   checkFit1111->SetParError(0,0.4817669);
   checkFit1111->SetParLimits(0,0,0);
   checkFit1111->SetParameter(1,1.052897);
   checkFit1111->SetParError(1,0.01966805);
   checkFit1111->SetParLimits(1,0,0);
   checkFit1111->Draw("same");
   
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
