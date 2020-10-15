void FieldFitCheck_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.42752,75,87.01644);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1259[11] = {
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
   Double_t Graph0_fy1259[11] = {
   -41.64494,
   -32.30453,
   -21.76967,
   -11.71931,
   -2.269612,
   8.097074,
   18.16495,
   27.73559,
   41.11747,
   48.56419,
   60.23387};
   Double_t Graph0_fex1259[11] = {
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
   Double_t Graph0_fey1259[11] = {
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1259,Graph0_fy1259,Graph0_fex1259,Graph0_fey1259);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01259 = new TH1F("Graph_Graph01259","Sub-runs 250",100,-60,60);
   Graph_Graph01259->SetMinimum(-52.88312);
   Graph_Graph01259->SetMaximum(71.47205);
   Graph_Graph01259->SetDirectory(0);
   Graph_Graph01259->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01259->SetLineColor(ci);
   Graph_Graph01259->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01259->GetXaxis()->CenterTitle(true);
   Graph_Graph01259->GetXaxis()->SetLabelFont(42);
   Graph_Graph01259->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01259->GetXaxis()->SetTitleFont(42);
   Graph_Graph01259->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01259->GetYaxis()->CenterTitle(true);
   Graph_Graph01259->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01259->GetYaxis()->SetLabelFont(42);
   Graph_Graph01259->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01259->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01259->GetYaxis()->SetTitleFont(42);
   Graph_Graph01259->GetZaxis()->SetLabelFont(42);
   Graph_Graph01259->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01259->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01259);
   
   
   TF1 *checkFit1260 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1260->SetFillColor(19);
   checkFit1260->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1260->SetLineColor(ci);
   checkFit1260->SetLineWidth(2);
   checkFit1260->SetChisquare(10.56747);
   checkFit1260->SetNDF(9);
   checkFit1260->GetXaxis()->SetLabelFont(42);
   checkFit1260->GetXaxis()->SetTitleOffset(1);
   checkFit1260->GetXaxis()->SetTitleFont(42);
   checkFit1260->GetYaxis()->SetLabelFont(42);
   checkFit1260->GetYaxis()->SetTitleFont(42);
   checkFit1260->SetParameter(0,8.564099);
   checkFit1260->SetParError(0,0.2638972);
   checkFit1260->SetParLimits(0,0,0);
   checkFit1260->SetParameter(1,1.018977);
   checkFit1260->SetParError(1,0.008345164);
   checkFit1260->SetParLimits(1,0,0);
   checkFit1260->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1260);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.17");
   pt_LaTex = pt->AddText(" 1.02#pm0.00835");
   pt_LaTex = pt->AddText(" 8.56#pm0.264");
   pt_LaTex = pt->AddText(" #minus8.4#pm0.268");
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
   TLine *line = new TLine(-60,0,-8.404604,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.404604,-52.88312,-8.404604,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1261 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1261->SetFillColor(19);
   checkFit1261->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1261->SetLineColor(ci);
   checkFit1261->SetLineWidth(2);
   checkFit1261->SetChisquare(10.56747);
   checkFit1261->SetNDF(9);
   checkFit1261->GetXaxis()->SetLabelFont(42);
   checkFit1261->GetXaxis()->SetTitleOffset(1);
   checkFit1261->GetXaxis()->SetTitleFont(42);
   checkFit1261->GetYaxis()->SetLabelFont(42);
   checkFit1261->GetYaxis()->SetTitleFont(42);
   checkFit1261->SetParameter(0,8.564099);
   checkFit1261->SetParError(0,0.2638972);
   checkFit1261->SetParLimits(0,0,0);
   checkFit1261->SetParameter(1,1.018977);
   checkFit1261->SetParError(1,0.008345164);
   checkFit1261->SetParLimits(1,0,0);
   checkFit1261->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
