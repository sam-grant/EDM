void Asymmetry_wa_labFrame_eCut()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 10:46:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1428571,-0.25,1.285714,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TF1 *N_37 = new TF1("N_3",";y=p/p_{max};Arbitrary units",0,1, TF1::EAddToList::kDefault);
   N_37->SetFillColor(19);
   N_37->SetFillStyle(0);
   N_37->SetLineWidth(3);
   N_37->GetXaxis()->SetTitle("y=p/p_{max}");
   N_37->GetXaxis()->CenterTitle(true);
   N_37->GetXaxis()->SetLabelFont(42);
   N_37->GetXaxis()->SetTitleSize(0.04);
   N_37->GetXaxis()->SetTitleOffset(1.1);
   N_37->GetXaxis()->SetTitleFont(42);
   N_37->GetYaxis()->SetTitle("Arbitrary units");
   N_37->GetYaxis()->CenterTitle(true);
   N_37->GetYaxis()->SetNdivisions(4000510);
   N_37->GetYaxis()->SetLabelFont(42);
   N_37->GetYaxis()->SetTitleSize(0.04);
   N_37->GetYaxis()->SetTitleOffset(1.1);
   N_37->GetYaxis()->SetTitleFont(42);
   N_37->Draw("");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("N_3"," N(y)","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("A_3"," A(y)","lpf");
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
   entry=leg->AddEntry("NA2_3"," NA^{2}(y)","lpf");
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
   
   TF1 *A_38 = new TF1("A_3","( x * (2*x + 1) ) / ( -x*x + x + 3 )",0,1, TF1::EAddToList::kDefault);
   A_38->SetFillColor(19);
   A_38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   A_38->SetLineColor(ci);
   A_38->SetLineWidth(3);
   A_38->GetXaxis()->SetLabelFont(42);
   A_38->GetXaxis()->SetTitleOffset(1);
   A_38->GetXaxis()->SetTitleFont(42);
   A_38->GetYaxis()->SetLabelFont(42);
   A_38->GetYaxis()->SetTitleFont(42);
   A_38->Draw("same");
   
   TF1 *NA2_39 = new TF1("NA2_3","(1/0.0284282) * N_3 * A_3 * A_3",0,1, TF1::EAddToList::kDefault);
   NA2_39->SetFillColor(19);
   NA2_39->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   NA2_39->SetLineColor(ci);
   NA2_39->SetLineWidth(3);
   NA2_39->GetXaxis()->SetLabelFont(42);
   NA2_39->GetXaxis()->SetTitleOffset(1);
   NA2_39->GetXaxis()->SetTitleFont(42);
   NA2_39->GetYaxis()->SetLabelFont(42);
   NA2_39->GetYaxis()->SetTitleFont(42);
   NA2_39->Draw("same");
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
