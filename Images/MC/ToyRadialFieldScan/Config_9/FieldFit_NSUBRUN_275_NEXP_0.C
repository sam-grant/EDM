void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2129774,45,0.1533097);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1107[3] = {
   0.08911937,
   -0.1487871,
   -0.03114191};
   Double_t Graph0_fex1107[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1107[3] = {
   0.003142438,
   0.003142454,
   0.003142438};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","Sub-runs 275",100,-36,36);
   Graph_Graph01107->SetMinimum(-0.1763487);
   Graph_Graph01107->SetMaximum(0.1166809);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
   
   TF1 *mainFit1108 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1108->SetFillColor(19);
   mainFit1108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1108->SetLineColor(ci);
   mainFit1108->SetLineWidth(2);
   mainFit1108->SetChisquare(0.1155102);
   mainFit1108->SetNDF(1);
   mainFit1108->GetXaxis()->SetLabelFont(42);
   mainFit1108->GetXaxis()->SetTitleOffset(1);
   mainFit1108->GetXaxis()->SetTitleFont(42);
   mainFit1108->GetYaxis()->SetLabelFont(42);
   mainFit1108->GetYaxis()->SetTitleFont(42);
   mainFit1108->SetParameter(0,-0.03026949);
   mainFit1108->SetParError(0,0.00181429);
   mainFit1108->SetParLimits(0,0,0);
   mainFit1108->SetParameter(1,-0.003965103);
   mainFit1108->SetParError(1,7.406816e-05);
   mainFit1108->SetParLimits(1,0,0);
   mainFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1108);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.116");
   pt_LaTex = pt->AddText("#minus0.00397#pm7.41e-05");
   pt_LaTex = pt->AddText("#minus0.0303#pm0.00181");
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
   TLine *line = new TLine(-36,0,-7.633972,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.633972,-0.1763487,-7.633972,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1109 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1109->SetFillColor(19);
   mainFit1109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1109->SetLineColor(ci);
   mainFit1109->SetLineWidth(2);
   mainFit1109->SetChisquare(0.1155102);
   mainFit1109->SetNDF(1);
   mainFit1109->GetXaxis()->SetLabelFont(42);
   mainFit1109->GetXaxis()->SetTitleOffset(1);
   mainFit1109->GetXaxis()->SetTitleFont(42);
   mainFit1109->GetYaxis()->SetLabelFont(42);
   mainFit1109->GetYaxis()->SetTitleFont(42);
   mainFit1109->SetParameter(0,-0.03026949);
   mainFit1109->SetParError(0,0.00181429);
   mainFit1109->SetParLimits(0,0,0);
   mainFit1109->SetParameter(1,-0.003965103);
   mainFit1109->SetParError(1,7.406816e-05);
   mainFit1109->SetParLimits(1,0,0);
   mainFit1109->Draw("same");
   
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
