void FieldFit_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2048787,45,0.1412263);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1097[3] = {
   0.08024611,
   -0.1438984,
   -0.02901645};
   Double_t Graph0_fex1097[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1097[3] = {
   0.003296012,
   0.003296105,
   0.003296054};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","Sub-runs 250",100,-36,36);
   Graph_Graph01097->SetMinimum(-0.1702682);
   Graph_Graph01097->SetMaximum(0.1066158);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   
   TF1 *mainFit1098 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1098->SetFillColor(19);
   mainFit1098->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1098->SetLineColor(ci);
   mainFit1098->SetLineWidth(2);
   mainFit1098->SetChisquare(0.4844398);
   mainFit1098->SetNDF(1);
   mainFit1098->GetXaxis()->SetLabelFont(42);
   mainFit1098->GetXaxis()->SetTitleOffset(1);
   mainFit1098->GetXaxis()->SetTitleFont(42);
   mainFit1098->GetYaxis()->SetLabelFont(42);
   mainFit1098->GetYaxis()->SetTitleFont(42);
   mainFit1098->SetParameter(0,-0.03088958);
   mainFit1098->SetParError(0,0.00190298);
   mainFit1098->SetParLimits(0,0,0);
   mainFit1098->SetParameter(1,-0.003735741);
   mainFit1098->SetParError(1,7.768884e-05);
   mainFit1098->SetParLimits(1,0,0);
   mainFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1098);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.484");
   pt_LaTex = pt->AddText("#minus0.00374#pm7.77e-05");
   pt_LaTex = pt->AddText("#minus0.0309#pm0.0019");
   pt_LaTex = pt->AddText("#minus8.27#pm0.538");
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
   TLine *line = new TLine(-36,0,-8.268663,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.268663,-0.1702682,-8.268663,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1099 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1099->SetFillColor(19);
   mainFit1099->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1099->SetLineColor(ci);
   mainFit1099->SetLineWidth(2);
   mainFit1099->SetChisquare(0.4844398);
   mainFit1099->SetNDF(1);
   mainFit1099->GetXaxis()->SetLabelFont(42);
   mainFit1099->GetXaxis()->SetTitleOffset(1);
   mainFit1099->GetXaxis()->SetTitleFont(42);
   mainFit1099->GetYaxis()->SetLabelFont(42);
   mainFit1099->GetYaxis()->SetTitleFont(42);
   mainFit1099->SetParameter(0,-0.03088958);
   mainFit1099->SetParError(0,0.00190298);
   mainFit1099->SetParLimits(0,0,0);
   mainFit1099->SetParameter(1,-0.003735741);
   mainFit1099->SetParError(1,7.768884e-05);
   mainFit1099->SetParLimits(1,0,0);
   mainFit1099->Draw("same");
   
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
