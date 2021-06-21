void Asymmetry_TEST_labFrame()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 17:48:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1428571,-0.25,1.285714,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TF1 *N_413 = new TF1("N_4",";y=p/p_{max};Arbitrary units",0,1, TF1::EAddToList::kDefault);
   N_413->SetFillColor(19);
   N_413->SetFillStyle(0);
   N_413->SetLineWidth(3);
   N_413->GetXaxis()->SetTitle("y=p/p_{max}");
   N_413->GetXaxis()->CenterTitle(true);
   N_413->GetXaxis()->SetLabelFont(42);
   N_413->GetXaxis()->SetTitleSize(0.04);
   N_413->GetXaxis()->SetTitleOffset(1.1);
   N_413->GetXaxis()->SetTitleFont(42);
   N_413->GetYaxis()->SetTitle("Arbitrary units");
   N_413->GetYaxis()->CenterTitle(true);
   N_413->GetYaxis()->SetNdivisions(4000510);
   N_413->GetYaxis()->SetLabelFont(42);
   N_413->GetYaxis()->SetTitleSize(0.04);
   N_413->GetYaxis()->SetTitleOffset(1.1);
   N_413->GetYaxis()->SetTitleFont(42);
   N_413->Draw("");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("N_4"," N(y)","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("A_4"," A(y)","lpf");
   entry->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("NA_5"," NA(y)","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TF1 *A_414 = new TF1("A_4","( 0.5 * (1/0.266991) * (sqrt(x * (1-x)) * (1 + 4*x) ) / (5 + 5*x - 4*x*x) )",0,1, TF1::EAddToList::kDefault);
   A_414->SetFillColor(19);
   A_414->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   A_414->SetLineColor(ci);
   A_414->SetLineWidth(3);
   A_414->GetXaxis()->SetLabelFont(42);
   A_414->GetXaxis()->SetTitleOffset(1);
   A_414->GetXaxis()->SetTitleFont(42);
   A_414->GetYaxis()->SetLabelFont(42);
   A_414->GetYaxis()->SetTitleFont(42);
   A_414->Draw("same");
   
   TF1 *NA_515 = new TF1("NA_5"," (1/0.287487) * N_4 * A_4 ",0,1, TF1::EAddToList::kDefault);
   NA_515->SetFillColor(19);
   NA_515->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   NA_515->SetLineColor(ci);
   NA_515->SetLineWidth(3);
   NA_515->GetXaxis()->SetLabelFont(42);
   NA_515->GetXaxis()->SetTitleOffset(1);
   NA_515->GetXaxis()->SetTitleFont(42);
   NA_515->GetYaxis()->SetLabelFont(42);
   NA_515->GetYaxis()->SetTitleFont(42);
   NA_515->Draw("same");
   TLine *line = new TLine(0,0,1,0);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   TGaxis *gaxis = new TGaxis(0,1.1,1,1.1,0,3127.114,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Track momentum [MeV]");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
