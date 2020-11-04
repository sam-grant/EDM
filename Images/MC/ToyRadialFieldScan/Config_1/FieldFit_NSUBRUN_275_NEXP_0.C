void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2082418,45,0.1445007);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[2] = {
   -30,
   30};
   Double_t Graph0_fy1085[2] = {
   0.08256786,
   -0.1463089};
   Double_t Graph0_fex1085[2] = {
   0,
   0};
   Double_t Graph0_fey1085[2] = {
   0.003142438,
   0.003142438};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","Sub-runs 275",100,-36,36);
   Graph_Graph01085->SetMinimum(-0.1729675);
   Graph_Graph01085->SetMaximum(0.1092265);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
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
   mainFit1086->SetChisquare(3.312284e-16);
   mainFit1086->SetNDF(0);
   mainFit1086->GetXaxis()->SetLabelFont(42);
   mainFit1086->GetXaxis()->SetTitleOffset(1);
   mainFit1086->GetXaxis()->SetTitleFont(42);
   mainFit1086->GetYaxis()->SetLabelFont(42);
   mainFit1086->GetYaxis()->SetTitleFont(42);
   mainFit1086->SetParameter(0,-0.03187054);
   mainFit1086->SetParError(0,0.002222039);
   mainFit1086->SetParLimits(0,0,0);
   mainFit1086->SetParameter(1,-0.003814613);
   mainFit1086->SetParError(1,7.406797e-05);
   mainFit1086->SetParLimits(1,0,0);
   mainFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1086);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00381#pm7.41e-05");
   pt_LaTex = pt->AddText("#minus0.0319#pm0.00222");
   pt_LaTex = pt->AddText("#minus8.35#pm0.605");
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
   TLine *line = new TLine(-36,0,-8.354855,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.354855,-0.1729675,-8.354855,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1087 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1087->SetFillColor(19);
   mainFit1087->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1087->SetLineColor(ci);
   mainFit1087->SetLineWidth(2);
   mainFit1087->SetChisquare(3.312284e-16);
   mainFit1087->SetNDF(0);
   mainFit1087->GetXaxis()->SetLabelFont(42);
   mainFit1087->GetXaxis()->SetTitleOffset(1);
   mainFit1087->GetXaxis()->SetTitleFont(42);
   mainFit1087->GetYaxis()->SetLabelFont(42);
   mainFit1087->GetYaxis()->SetTitleFont(42);
   mainFit1087->SetParameter(0,-0.03187054);
   mainFit1087->SetParError(0,0.002222039);
   mainFit1087->SetParLimits(0,0,0);
   mainFit1087->SetParameter(1,-0.003814613);
   mainFit1087->SetParError(1,7.406797e-05);
   mainFit1087->SetParLimits(1,0,0);
   mainFit1087->Draw("same");
   
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
