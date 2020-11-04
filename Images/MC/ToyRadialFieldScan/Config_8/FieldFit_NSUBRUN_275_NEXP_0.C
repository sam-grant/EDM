void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3481053,75,0.2755067);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1151[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1151[5] = {
   0.1661063,
   0.06672815,
   -0.03568712,
   -0.1324613,
   -0.2387048};
   Double_t Graph0_fex1151[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1151[5] = {
   0.005465109,
   0.005465109,
   0.005465109,
   0.005465109,
   0.005465109};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1151,Graph0_fy1151,Graph0_fex1151,Graph0_fey1151);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01151 = new TH1F("Graph_Graph01151","Sub-runs 275",100,-60,60);
   Graph_Graph01151->SetMinimum(-0.2857441);
   Graph_Graph01151->SetMaximum(0.2131455);
   Graph_Graph01151->SetDirectory(0);
   Graph_Graph01151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01151->SetLineColor(ci);
   Graph_Graph01151->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01151->GetXaxis()->CenterTitle(true);
   Graph_Graph01151->GetXaxis()->SetLabelFont(42);
   Graph_Graph01151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01151->GetXaxis()->SetTitleFont(42);
   Graph_Graph01151->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01151->GetYaxis()->CenterTitle(true);
   Graph_Graph01151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01151->GetYaxis()->SetLabelFont(42);
   Graph_Graph01151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01151->GetYaxis()->SetTitleFont(42);
   Graph_Graph01151->GetZaxis()->SetLabelFont(42);
   Graph_Graph01151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01151);
   
   
   TF1 *mainFit1152 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1152->SetFillColor(19);
   mainFit1152->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1152->SetLineColor(ci);
   mainFit1152->SetLineWidth(2);
   mainFit1152->SetChisquare(0.5657047);
   mainFit1152->SetNDF(3);
   mainFit1152->GetXaxis()->SetLabelFont(42);
   mainFit1152->GetXaxis()->SetTitleOffset(1);
   mainFit1152->GetXaxis()->SetTitleFont(42);
   mainFit1152->GetYaxis()->SetLabelFont(42);
   mainFit1152->GetYaxis()->SetTitleFont(42);
   mainFit1152->SetParameter(0,-0.03480376);
   mainFit1152->SetParError(0,0.002444071);
   mainFit1152->SetParLimits(0,0,0);
   mainFit1152->SetParameter(1,-0.004035247);
   mainFit1152->SetParError(1,6.912877e-05);
   mainFit1152->SetParLimits(1,0,0);
   mainFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1152);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.189");
   pt_LaTex = pt->AddText("#minus0.00404#pm6.91e-05");
   pt_LaTex = pt->AddText("#minus0.0348#pm0.00244");
   pt_LaTex = pt->AddText("#minus8.62#pm0.623");
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
   TLine *line = new TLine(-60,0,-8.624939,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.624939,-0.2857441,-8.624939,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1153 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1153->SetFillColor(19);
   mainFit1153->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1153->SetLineColor(ci);
   mainFit1153->SetLineWidth(2);
   mainFit1153->SetChisquare(0.5657047);
   mainFit1153->SetNDF(3);
   mainFit1153->GetXaxis()->SetLabelFont(42);
   mainFit1153->GetXaxis()->SetTitleOffset(1);
   mainFit1153->GetXaxis()->SetTitleFont(42);
   mainFit1153->GetYaxis()->SetLabelFont(42);
   mainFit1153->GetYaxis()->SetTitleFont(42);
   mainFit1153->SetParameter(0,-0.03480376);
   mainFit1153->SetParError(0,0.002444071);
   mainFit1153->SetParLimits(0,0,0);
   mainFit1153->SetParameter(1,-0.004035247);
   mainFit1153->SetParError(1,6.912877e-05);
   mainFit1153->SetParLimits(1,0,0);
   mainFit1153->Draw("same");
   
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
